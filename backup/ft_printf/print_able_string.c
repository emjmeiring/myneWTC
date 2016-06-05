#include "ft_printf.h"
#include "./libft/includes/libft.h"
#include <stdio.h>
#include <string.h>

char	*print_able_string(t_convertor conv, char *str_arg, int *count)
{
	char			*format;
	char			*padded;
	unsigned int	arg_len;
	int				k;
	int 			j;

	arg_len = strlen(str_arg);
	format = ft_strnew(conv.precision.width + (arg_len*2));
	padded = ft_strnew(conv.precision.width*2);
	 if (conv.flags.left_justified == '-')
	{
		if(conv.precision.width)
		{
			if (conv.precision.period)
			{
				if (conv.precision.precision < arg_len)
					k = conv.precision.width - conv.precision.precision;
				else k = conv.precision.width - arg_len;
				while (k-- > 0)
					padded = strncat(padded, " ", 1);
				if (conv.precision.precision < arg_len)
				{					
					write(1, str_arg, conv.precision.precision);
					write(1, padded, strlen(padded));
					*count += strlen(padded) + conv.precision.precision;
					return ("\0");
				}else
				{
					if (*padded == ' ')
					{
						write(1, str_arg, arg_len);
						write(1, padded, strlen(padded));
						*count += strlen(padded) + arg_len;
						return ("\0");
					}else return (str_arg);
				}
			}else 
			{
				k = conv.precision.width - arg_len;
				while (k-- > 0)
					strncat(padded, " ", 1);		
				write(1, str_arg, arg_len);
				write(1, padded, strlen(padded));
				*count += strlen(padded) + arg_len;
				return ("\0");
			}
		}else
		{
			if(conv.precision.period && conv.precision.precision < arg_len )
			{
				*(str_arg + conv.precision.precision) = '\0';
				return (str_arg);
			}else return (str_arg);
		}
	}else if(conv.precision.width)
	{
		if (conv.precision.period)
		{
			if (conv.precision.precision < arg_len)
				k = conv.precision.width - conv.precision.precision;
			else k = conv.precision.width - arg_len;
			while (k-- > 0)
				padded = strncat(padded, " ", 1);		
			format = strncat(padded, str_arg, conv.precision.precision);
			return (format);
		}else
		{
			j = conv.precision.width - arg_len; 
			while (j-- > 0)
				padded = strncat(padded, " ", 1);		
			format = strcat(padded, str_arg);
			return (format);
		}
	}else if (conv.precision.period && conv.precision.precision < arg_len)
	{
		*(str_arg + conv.precision.precision) = '\0';
		return (str_arg);
	}else
	{
		return (str_arg);
	}
}
