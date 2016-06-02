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

int		search(t_convertor *conv, const char *stream, char *str_arg)
{
	int				i;
	int				ip;
	static int		went_left;
	int				flag_matched;
	int				min_fw_matched;
	int				period_matched;
	int				max_fw_matched;
	char			*formatted;
	int				has_printed;
	//char			*stream = (char *)malloc();
	printf("==%s==", str_arg);
	//strcpy(stream,str);
	i = 0;
	flag_matched = FALSE;
	min_fw_matched = FALSE;
	period_matched = FALSE;
	max_fw_matched = FALSE;
	went_left = FALSE;
	i++;
	has_printed = 0;
	while (*(stream + i) != '\0' && !has_printed)
	{
		if (arg_type(*(stream + i)))
		{
			went_left = TRUE;
			if (flag_matched)
			{
				//printf("\nno argtype\n");
				if (min_fw_matched)
				{
					printf("all done");
				}else
				{
					//write(1, (stream + i), 7);
					i += get_width(&conv->precision, (stream + i), 0, str_arg);
					
					min_fw_matched = TRUE;
		    		//printf("%d%c%d",conv->precision.width,conv->precision.period,conv->precision.precision);
		    		//write(1, (stream + i), 7);
				}
			}else
			{
				//printf("\n%d\n", i);
				//printf("**%c**", *(stream + i));
				//printf("\n%d\n", i);
				while (get_flag(&conv->flags, *(stream + i)))
				{
					i++;
				}
				//printf("woow");
				flag_matched = TRUE;
			}
			//printf("**%c**", conv.flags.left_justified);
		}else
		{
			//printf("hey");
			//write(1, formatted, strlen(formatted));
			has_printed = 1;
			i++;
		}
	}
	return (i-1);
}

int		ft_printf(char const *stream, ...)
{
//printf("**%c**",*(stream +30));
	int				i;
	int				ip;
	va_list			args;
	t_convertor		conv;
	char			*str_arg;

	va_start(args, stream);
	i = 0;
	ip =0;
	while (*(stream + i) != '\0')
	{
		if (*(stream + i) == FORMAT_SPECIFIER)
		{
			if (*(stream + i + 1) == FORMAT_SPECIFIER)
			{
				write(1, (stream + i + 1), 1);
				i += 2;
			}
			else
			{
			//printf("++%c++", *(stream+i));
				while (arg_type(*(stream + ip +i)))
					ip++;
				conv.format_spec = *(stream + ip + i);
				str_arg = master_chef(conv, args);
				///printf("==%s==", str_arg);
				if (ip > 1)
				{
					i += search(&conv, (stream + i), str_arg);
					write(1, str_arg, strlen(str_arg));
				}else 
				{
					i++;
					write(1, str_arg, strlen(str_arg));
				}
				i++;
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
