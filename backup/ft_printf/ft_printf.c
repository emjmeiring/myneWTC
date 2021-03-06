#include "ft_printf.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define FORMAT_SPECIFIER '%'
#define TRUE (1==1)
#define FALSE (!TRUE)

int		arg_type(char stream)
{
	if (!(stream == 's' || stream == 'S' || stream == 'p' || stream == 'd' ||
		stream == 'D' || stream == 'i' || stream == 'o' || stream == 'u' ||
		stream == 'U' || stream == 'x' || stream == 'X' || stream == 'c' ||
		stream == 'C'))
		return (1);
	return (0);
}

void	init_convertor(t_convertor *conv)
{
	conv->flags.left_justified = '\0';
	conv->flags.zero_padding = '\0';
	conv->flags.sign = '\0';
	conv->flags.blanks = '\0';
	conv->flags.hashtag = '\0';
	conv->precision.width = 0;
	conv->precision.precision = 0;
	conv->precision.period = '\0';
	conv->format_spec = '\0';
}
int		ft_printf(char const *stream, ...)
{
	int				i;
	int				flag_matched;
	int				min_fw_matched;
	int				has_printed;
	int				count;
	va_list			args;
	t_convertor		conv;
	
	init_convertor(&conv);
	va_start(args, stream);
	i = 0;
	count = 1;
	flag_matched = FALSE;
	min_fw_matched = FALSE;
	while (*(stream + i) != '\0')
	{
		if (*(stream + i) == FORMAT_SPECIFIER)
		{
			has_printed = 0;
			if (*(stream + i + 1) == FORMAT_SPECIFIER)
			{
				write(1, (stream + i + 1), 1);
				count++;
				i += 2;
			}
			else
			{
				i++;
				while (*(stream + i) != '\0' && !has_printed)
				{
					if (arg_type(*(stream + i)))
					{
						if (flag_matched)
						{
							if (min_fw_matched)
							{
								write(1, "-/cant find specifier type-/\n", 29);
								return (-1);
							}else
							{
							i += get_width(&conv.precision, (stream + i), 0);
								min_fw_matched = TRUE;
							}
						}else
						{
							while (get_flag(&conv.flags, *(stream + i)))
							{
								i++;
							}
							flag_matched = TRUE;
						}
					}else
					{
						conv.format_spec = *(stream + i);
						count += master_chef(conv, args);
						has_printed = 1;
						i++;
					}
				}
			}
		}else
		{
			write(1, (stream + i), 1);
			count++;
			i++;
		}
	}
	return (count);
}
