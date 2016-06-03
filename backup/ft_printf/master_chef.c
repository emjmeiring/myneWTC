#include "ft_printf.h"
#include "./libft/includes/libft.h"
#include <stdio.h>
#include <ctype.h>

void reverse(char s[])
{

	int i, j;
	char c;
	for (i = 0, j = strlen(s)-1; i<j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

void itoa(int n, char *s)
{
	int i, sign;

	if ((sign = n) < 0)  /* record sign */
		n = -n;
	i = 0;
	//write(1, s, 5);	
	do {       /* generate digits in reverse order */
         s[i++] = n % 10 + '0';   /* get next digit */
	} while ((n /= 10) > 0);     /* delete it */
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
 }

void	master_chef(t_convertor conv, va_list args)
{
	char	*str;
	char	*str_arg;
	int		len;

	if (conv.format_spec == 's')
		str = print_able_string(conv, va_arg(args, char *));
	else if (conv.format_spec == 'd' || conv.format_spec == 'i')
	{
		str_arg = ft_strnew(20);
		itoa(va_arg(args, int),str_arg);
		//write(1, "aaasa", 5);
		str = print_able_digit(conv, str_arg);
	}//*
	/*else if (*stream == 'S');
	else if (*stream == 'p');
	
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
