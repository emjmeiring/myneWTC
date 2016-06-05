#include "ft_printf.h"
#include "./libft/includes/libft.h"
#include <stdio.h>
#include <ctype.h>

unsigned int octal_pot(unsigned int n)
{
	int rem;
	int i;
	unsigned int octal;

	i = 1;
	octal=0;
	while (n != 0)
	{
		rem = n % 8;
		n /= 8;
		octal += rem * i;
		i *= 10;
	}
	return (octal);
}

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

char *hexa_pot(unsigned int n)
{
	int rem;
	int i;
	char *hexa;

	i = 0;
	hexa = ft_strnew(10);
	while (n != 0)
	{
		rem = n % 16;
		if (rem < 10)
			rem += 48;
		else
			rem += 55 + 32;
		*(hexa + i) = rem;
		n /= 16;
		i++;
	}
	reverse(hexa);
	return (hexa);
}

void itoa(int n, char *s)
{
	int i, sign;

	if ((sign = n) < 0)  /* record sign */
		n = -n;
	i = 0;
	do {       /* generate digits in reverse order */
         s[i++] = n % 10 + '0';   /* get next digit */
	} while ((n /= 10) > 0);     /* delete it */
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
 }

int		master_chef(t_convertor conv, va_list args)
{
	char	*str;
	char	*str_arg;
	int		len;
	unsigned int	num_arg;

	num_arg = 0;
	str_arg = ft_strnew(20);
	if (conv.format_spec == 's')
		str = print_able_string(conv, va_arg(args, char *), &len);
	else if (conv.format_spec == 'd' || conv.format_spec == 'i')
	{
		itoa(va_arg(args, int),str_arg);
		str = print_able_digit(conv, str_arg, &len);
	}else if (conv.format_spec == 'c')
	{
		*str_arg = (char)va_arg(args, int);
		*(str_arg + 1) = '\0';
		str = print_able_string(conv, str_arg, &len);
	}else if (conv.format_spec == 'o')
	{
		num_arg = octal_pot(va_arg(args, unsigned int));
		itoa(num_arg,str_arg);
		str = print_able_digit(conv, str_arg, &len);
	}else if (conv.format_spec == 'u')
	{
		itoa(va_arg(args, unsigned int),str_arg);
		str = print_able_digit(conv, str_arg, &len);
	}else if (conv.format_spec == 'x')
	{
		str_arg = hexa_pot(va_arg(args, unsigned int));
		str = print_able_digit(conv, str_arg, &len);
	}
	else if (conv.format_spec == 'X')
	{
		str_arg = hexa_pot(va_arg(args, unsigned int));
		str_arg = ft_toupper(str_arg);
		str = print_able_digit(conv, str_arg, &len);
	}
	/*else if (conv.format_spec == 'S')
	else if (conv.format_spec == 'p')
	else if (*stream == 'C')*/
	if (*str != '\0');
		len = strlen(str);
	write(1, str, len);
	return (len);
	//write(1, &conv.flags.left_justified, 1);
	//printf("masterchef:%c\n", *stream);
//	return (len);
}
