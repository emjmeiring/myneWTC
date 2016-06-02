#include "ft_printf.h"

/*
 * Carries out syntactic and sementic analysis of
 * the length-modifiers. Advances the sub-token's
 * location pointer on a successful parse and
 * returns to the caller. Otherwise, does nothing.
 * Returns straight back to caller.
 */
 
 static t_length	length_specified(char pre, char post)
 {
	if (pre == 'h')
		if (post == 'h')
			return (post = HH);
		else
			return (post = H);
	if (pre == 'l')
		if (post == 'l')
			return (LL);
		else
			return (L)
	if (pre == 'j')
		return (J);
	if (pre == 'z')
		return (Z);
	return (NOT_SPECIFIED);
 }
 
 int				length_parser(t_format *format, t_convertor conv)
 {
 	char	pre;
 	char	post;

	if ((pre = *get_char(*format)) && (post = *get_char(*(format + 1))))
	{
		conv->length = length_specified(pre, post);
		if (conv->length != NOT_SPECIFIED)
			format->parse_loc++;
		if (conv->length == LL || conv->length == HH)
			format->parse_loc++;
		return (0);
	}
	return (0);
	
 }
