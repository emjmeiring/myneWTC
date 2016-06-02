/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 13:09:33 by simzam            #+#    #+#             */
/*   Updated: 2016/05/24 16:19:33 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*find_formatter(t_format *format)
{
	if (char_at(format) == '%')
		return (format->string + format->parse_loc);
}

intmax_t	get_arg_len(t_length length, va_list args)
{
	intmax_t arg_val;

	if (length == HH)
		arg_val = (char)arg_val;
	else if (length == H)
		arg_val = (short)arg_val;
	else if (length == DEFAULT)
		arg_val = (int)arg_val;
	else if (length == L)
		return (va_arg(args, long);
	else if (length == LL)
		return (va_arg(args, long long);
	else if (length == J)
		return (va_arg(args, intmax_t);
	else if (length == z)
		return(va_arg(args, size_t);
	else return (arg_val);
}
