#include "ft_printf.h"
#include "./libft/includes/libft.h"
#include <stdio.h>
#include <string.h>
 
char	*print_able_digit(t_convertor conv, char *str_arg)
{
	char	*format;
	char	*padded;
	int		arg_len;
	int		k;
	int 	j;
//write(1, str_arg, 2);
	arg_len = strlen(str_arg);
	format = ft_strnew(conv.precision.width + (arg_len*2));
	padded = ft_strnew(conv.precision.width*2);
	if (conv.flags.left_justified == '-')
	{
	//write(1, &conv.flags.left_justified, 1);
		if(conv.precision.width)
		{
			//char s = conv.precision.width;
		//write(1, &s, 1);
			if (conv.precision.period)
			{
			//write(1, &conv.precision.period, 1);
				k = conv.precision.precision - arg_len;
				//char s = 3  + '0';
				//write(1, &s, 1);
				while (k-- > 0)
					padded = strncat(padded, "0", 1);
				format = strcat(padded, str_arg);
				if (conv.precision.precision > arg_len)
					k = conv.precision.width - conv.precision.precision;
				else k = conv.precision.width - arg_len;
				//write(1, format, strlen(format));
				while (k-- > 0)
					format = strncat(format, " ", 1);
				return (format);
			}else 
			{
				k = conv.precision.width - arg_len;
				while (k-- > 0)
					strncat(padded, " ", 1);		
				//format = strcat(str_arg, padded);
				write(1, str_arg, arg_len);
						//format = strncat(str_arg, padded, 2);
						write(1, padded, strlen(padded));
				  //ft_memdel((void **)(&str_arg));
				return ("\0");
			}
		}else
		{
			if(conv.precision.period && conv.precision.precision)
			{
				k = conv.precision.precision - arg_len;
				//char s = k  + '0';
				//write(1, &s, 1);
				while (k-- > 0)
					padded = strncat(padded, "0", 1);
				format = strcat(padded, str_arg);
				return (format);
				    //ft_memdel((void **)(&format));
			}else return (str_arg);
		}
	}else if(conv.precision.width)
	{
		if (conv.precision.period)
		{
			if (conv.precision.precision > arg_len)
				k = conv.precision.width - conv.precision.precision;
			else k = conv.precision.width - arg_len;
			//write(1, format, strlen(format));
			while (k-- > 0)
				format = strncat(format, " ", 1);
			k = conv.precision.precision - arg_len;
			while (k-- > 0)
				padded = strncat(padded, "0", 1);
			padded = strcat(padded, str_arg);
			format = strcat(format, padded);
			return (format);
		}else
		{
			j = conv.precision.width - arg_len; 
			while (j-- > 0)
				padded = strncat(padded, " ", 1);		
			format = strcat(padded, str_arg);
			  //ft_memdel((void **)(&str_arg));
			return (format);
		}
	}else if (conv.precision.period)
	{
		k = conv.precision.precision - arg_len;
		while (k-- > 0)
			padded = strncat(padded, "0", 1);
		format = strcat(padded, str_arg);
		return (format);
	}else
	{
		    //ft_memdel((void **)(&format));
		return (str_arg);
	}
}

