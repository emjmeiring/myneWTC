/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 10:55:59 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/24 13:47:33 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <wchar.h>
#include <stdarg.h>
#include <limits.h>
#include "./libft/includes/libft.h"
#define STDERR 2

typedef char 			t_bool;
typedef	unsigned int	pos_int;
typedef	size_t			t_size;

typedef struct			s_format
{
	const char			*string;
	t_size				parse_loc;
	t_size				parse_pass;	
}						t_format;

//static void				input_lexer(t_format *format);
//static void				input_parser(t_format *format, va_list args);

typedef	struct			s_flags
{
	t_bool				left_justified;
	t_bool				zero_padding;
	t_bool				sign;
	t_bool				blanks;
	t_bool				hashtag;
}						t_flags;

//static void				flag_lexer(t_format *format);

typedef	struct			s_precision
{
	unsigned int		precision;
	unsigned int		width;
	t_bool				period;
}						t_pc;

//static void				precison_lexer(t_format *format);

typedef enum			e_len_mod
{
	HH, H, L, LL, J, Z, NOT_SPECIFIED
}						t_length;

typedef enum			e_spec
{
	S_DECIMAL, OCTAL, HEX_UPPER, U_DECIMAL, CHAR, STRING, POINTER,
	INVALID_SPEC, HEX_LOWER
}						t_spec;

typedef	struct 			s_convertor
{
	t_flags				flags;
	t_pc				precision;
	t_length			length;
	t_spec				format_spec;
//	t_specifier			specifier;
}						t_convertor;

int						ft_printf(const char *format, ...);
int						specifier_lexer(const char *runner, va_list args);
//static void				conversion_lexer(t_format *format);
//static void				input_lexer(t_format *format, va_list args);
//static void				parse(t_format *format, va_list args);
//static void				syntax_error(char *party_pooper, t_format *format);
//char 						*hexa_converter(t_convertor conv, va_list args);

#endif
