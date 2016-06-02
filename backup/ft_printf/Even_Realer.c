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
//printf("**%c**",*(stream +30));
	int				i;
	int				ip;
	static int		went_left;
	int				flag_matched;
	int				min_fw_matched;
	int				period_matched;
	int				max_fw_matched;
	char			*flag;
	int				has_printed;
	va_list			args;
	t_convertor		conv;

	init_convertor(&conv);
	went_left = FALSE;
	va_start(args, stream);
	i = 0;
	flag = "-#+0 ";
	flag_matched = FALSE;
	min_fw_matched = FALSE;
	period_matched = FALSE;
	max_fw_matched = FALSE;
	//int has_printed = 0;
	/* Stream[i] != NULL */
	while (*(stream + i) != '\0')
	{
		/* Stream[i] == '%' */
		if (*(stream + i) == FORMAT_SPECIFIER)
		{
			has_printed = 0;
			/* Stream[i + 1] == '%' */
			if (*(stream + i + 1) == FORMAT_SPECIFIER)
			{
				write(1, (stream + i + 1), 1);
				i += 2;
			}
			else
			{
				i++;
				while (*(stream + i) != '\0' && !has_printed)
				{
					if (arg_type(*(stream + i)))
					{
						
						//printf("\nno argtype\n");
						went_left = TRUE;
						if (flag_matched)
						{
							if (min_fw_matched)
							{
								printf("all done");
							}
							else
							{
								i += get_width(&conv.precision, (stream + i), 0);
								min_fw_matched = TRUE;
							    //printf("%d%c%d", conv.precision.width,conv.precision.period,conv.precision.precision);
							}
						}
						else
						{
						//printf("\n%d\n", i);
						//printf("**%c**", *(stream + i));
						//printf("\n%d\n", i);
							while (get_flag(&conv.flags, *(stream + i)))
							{
								i++;
							}
							//printf("woow");
							flag_matched = TRUE;
						}
						//printf("**%c**", conv.flags.left_justified);
					}
					else
					{
						conv.format_spec = *(stream + i);
						master_chef(conv, args);
						has_printed = 1;
						i++;
						
					}
				}
			}
		}
		else
		{
			write(1, (stream + i), 1);
			//printf("\n%d", i);
			i++;
		}
	}
	return (8);
}
