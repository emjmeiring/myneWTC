#include "ft_printf.h"
#include <stdio.h>
#include <ctype.h>
int		get_flag(t_flags *conv_flag, char flag)
{
	if (flag == '#')
	{
		conv_flag->hashtag = flag;
		return (1);
	}else if (flag == '-')
	{
		conv_flag->left_justified = flag;
		return (1);
	}else if (flag == '+')
	{
		conv_flag->sign = flag;
		return (1);
	}else if (flag == '0')
	{
		conv_flag->zero_padding = flag;
		return (1);
	}else if (flag == ' ')
	{
		conv_flag->blanks = flag;
		return (1);
	}
	return (0);
}

int		get_width(t_pc *precision, const char *stream, int prec)
{
	int		i;
	int		stoi;

	i = 0;
	stoi = 0;
	while (isdigit(*(stream + i)))
	{
		stoi = atoi(stream);
		i++;
	}
	if (!prec && stoi)
		precision->width = stoi;
	else precision->precision = stoi;
	if (*(stream + i) == '.')
	{
		precision->period = *(stream + i);
		i++;
		i += get_width(precision, (stream + i), 1);
	}	
	return (i);
}
