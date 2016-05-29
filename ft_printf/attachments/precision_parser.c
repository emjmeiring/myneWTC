static size_t		va_width(t_conversion *conversion, va_list arguments)
{
	conversion->precision = va_arg(arguments, unsigned int);
	conversion->precision_set = 1;
	return (1);
}

static size_t		written_numbers(t_conversion *conversion, t_format *format)
{
	size_t			i;
	char			current;

	if (*get_current(format) == '-')
		i = 1;
	else
		i = 0;
	while (((current = *(get_current(format) + i)))
			&& ft_isdigit(current))
	{
		ft_atoi_add_digit_u(current, &conversion->precision);
		i++;
	}
	if (*get_current(format) == '-' && conversion->precision == 0)
		return (0);
	else
	{
		conversion->precision_set = 1;
		return (i);
	}
}

int					parse_precision(t_conversion *conversion
									, va_list arguments, t_format *format)
{
	size_t			length;

	if (*get_current(format) == '.')
	{
		format->location++;
		if (*get_current(format) == '*')
			length = (conversion, arguments);
		else
			length = written_numbers(conversion, format);
		if (conversion->precision > LARGEST_STAR_ARGUMENT)
		{
			precision_too_long(conversion, format);
			conversion->precision = 0;
		}
		format->location += length;
	}
	return (OKAY);

