#include "ft_printf.h"

/*
 * Gets the length-modifier of the integer
 * conversion, if specified. Otherwise, defaults
 * it to primitive type, int.
 */
 
intmax_t	length_lexer(t_length d_len, va_list args)
{
	intmax_t res;

	if (d_len == HH)
		res = (char)va_arg(args, int);
	if (d_len == H)
		res = (short)va_arg(args, int);
	if (d_len == L)
		return (va_arg(args, long));
	if (d_len == LL)
		return (va_args(args, long long));
	if (d_len == J)
		return (va_arg(args, intmax_t));
	if (d_len == Z)
		return (va_arg(args, size_t));
	if (d_len == NOT_SPECIFIED)
		res = va_arg(args, int);
	return (res);
}
