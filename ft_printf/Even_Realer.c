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
						went_left = TRUE;
						if (flag_matched)
						{
						//printf("\nno argtype\n");
							if (min_fw_matched)
							{
								printf("all done");
								/*
								if (period_matched)
								{
									printf("all done");
									
									if (max_fw_matched)
									{
										//printf("\n%d\n", i);
										i++;
									}
									else
									{
										ip = i;
										while (isdigit(*(stream + i)))
										{
											i++;
										}
										if (ip < i)
										{
											//printf("get_width((stream + ip), (i - ip))\n");
											//i = ip;
										}
										max_fw_matched = TRUE;
									}
								}
								else
								{
									ip = i;
									while (*(stream + i) == '.')
									{
										i++;
									}
									if (ip < i)
									{
										//printf("get_dot((stream + (i - 1)), (i - ip))\n");
										//i = ip;
									}
									period_matched = TRUE;								
								}*/
							}
							else
							{
								i += get_width(&conv.precision, (stream + i), 0);
								min_fw_matched = TRUE;
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
						if (went_left)
						{
							//printf("hey");
							conv.format_spec = *(stream + i);
							master_chef(conv, args);
							has_printed = 1;
							i++;
						}
						else
						{
							//printf("hey");
							conv.format_spec = *(stream + i);
							master_chef(conv, args);
							has_printed = 1;
							i++;
						}
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
