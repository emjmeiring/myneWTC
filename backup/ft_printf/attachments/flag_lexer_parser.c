/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_lexer_parser.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 21:29:02 by simzam            #+#    #+#             */
/*   Updated: 2016/05/28 16:42:11 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * Syntactic and sementic flag analyzer.
 * Returns flag token, if flag found
 * or null if not. Throws an error and returns 1
 * if sementic analysis fails. Otherwise returns 0.
 */
 
static t_bool	flag_lexer(t_flags **flag, char f_ind)
{
	if (f_ind == '#')
		return (flag->hashtag);
	if (f_ind == '0')
		return (flag->zero_padding);
	if (f_ind == '-')
		return (flag->left_justified);
	if (f_ind == '+')
		return (flag->sign);
	if (f_ind == ' ')
		return (flag->blanks);
	return (NULL);
}

static int		flag_parser(t_format *format, t_convertor *conv)
{
	t_bool		fmt_char;
	t_flags		flag;
	
	while ((fmt_char = *get_char(format)) &&
	(flag = flag_lexer(&conv->flags, fmt_char)))
	{
		if (*flag)
			return (syntax_error(&fmt_char, format));
		flag = 1;
		format->parse_loc++;
	}
	return (0);
}

static int		syntax_error(char *party_pooper, t_format *format)
{
	ft_putstr_fd("Oh, repeating flags, motherfucker?\nThis flag: '", STDERR);
	ft_putchar_fd(*party_pooper, STDERR);
	ft_putstr_fd("'??? Huh?\n", STDERR);
	return (1);
}
