#include "ft_printf.h"
#include "./libft/includes/libft.h"
#include <stdio.h>

void	master_chef(t_convertor conv, va_list args)
{
	char	*str;
	int		len;
	//printf("hey");
	if (conv.format_spec == 's')
		str = va_arg(args, char *);/*
	else if (*stream == 'S');
	else if (*stream == 'p');
	else if (*stream == 'd' || *stream == 'i')
		//str = ft_itoa(va_arg(args, int));
	else if (*stream == 'o');
	else if (*stream == 'O');
	else if (*stream == 'u');
	else if (*stream == 'U');
	else if (*stream == 'x');
		//(unsigned int)va_args(args, int)
	else if (*stream == 'X');
	else if (*stream == 'c');
	else if (*stream == 'C');*/
	len = strlen(str);
	write(1, str, len);
	//write(1, &conv.flags.left_justified, 1);
	//printf("masterchef:%c\n", *stream);
//	return (len);
}
