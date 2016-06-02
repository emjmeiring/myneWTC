#include "ft_printf.h"

int		width_parser(t_format *format, t_convertor *conv, va_list args)
{
	size_t		off_setter;
	char		pre;

	if ((pre = *get_char(format)) == '*')
	{
		conv->precision.width = va_arg(args, unsigned int);
		if (conv->precision.width > MAX_SUP_WIDTH)
		{
			conv->precision.width = 0;
			max_width_exceeded(conv, format);
		}
		format->parse_loc++;
	}
	else
	{
		//TODO: Till it stops finding numbers or chars,
		//This should check if the data is a number.
`		//If so, atoi it. When finished, advance the
		//parse_loc by off_setter;
	}
}
