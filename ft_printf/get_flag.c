#include "ft_printf.h"
#include <stdio.h>
#include <ctype.h>



int		get_flag(t_flags *conv_flag, char flag)
{
	//printf("aha");
	if (flag == '#')
	{
		conv_flag->hashtag = flag;
		return (1);
	}else if (flag == '-')
	{
		//printf("hey");
		conv_flag->left_justified = flag;
		//printf("//%c , \\%c", flag, conv_flag->left_justified);
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

int		get_width(t_pc *precision, const char *stream, int prec, char *str_arg)
{
	int		i;
	int		stoi;
	int		pad;
	char	*padded;

	i = 0;
	//write(1, (stream + i), 7);
	while (isdigit(*(stream + i)))
	{
		stoi = atoi(stream);
		i++;
	}	
	if (*(stream + i) == '.')
	{
		precision->period = *(stream + i);
		i++;
		i += get_width(precision, (stream + i), 1);
	}
	if (!prec)
		padded = (char *)malloc(sizeof(char)*(stoi + strlen(str_arg)))
		
		pad = stoi - strlen(str_arg);
		while (pad > 0)
		{
			
		}
	else precision->precision = stoi;
	//write(1, (stream + i), 7);	
	//printf("\n%d", i);
	return (i);
}
/*
	stoi = (char *)malloc(sizeof(int) * width_len)
	memcpy(stoi, stream, width_len);
	precision->width = atoi(stoi);
	precision->precision = atoi(stoi); // Not really sure if this is a good idea
	stream += width_len;
	free(stoi);*/

