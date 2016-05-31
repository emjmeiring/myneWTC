#include "ft_printf.h"
#include <stdio.h>
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
/*
void		get_dot(char *stream, int dots_len)
{
	int		i;
	t_pc	precision;

	i = 0;
	while (i < dots_len)
	{
		if (*(stream + i) == '.')
			precision->period = *(stream + i);
		i++;
	}
	stream += i;
}

void		get_width(char *stream, int width_len)
{
	int		i;
	t_pc	precision;
	int		stoi;

	stoi = (char *)malloc(sizeof(int) * width_len)
	memcpy(stoi, stream, width_len);
	precision->width = atoi(stoi);
	precision->precision = atoi(stoi); // Not really sure if this is a good idea
	stream += width_len;
	free(stoi);
}*/
