/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 10:55:59 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/31 14:00:11 by jomeirin         ###   ########.fr       */
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

typedef	struct		s_flags
{
	t_bool			left_justified;
	t_bool			zero_padding;
	t_bool			sign;
	t_bool			blanks;
	t_bool			hashtag;
}					t_flags;

typedef	struct		s_precision
{
	unsigned int	precision;
	unsigned int	width;
	t_bool			period;
}					t_pc;

typedef enum	e_len_mod
{
	HH, H, L, LL, J, Z, NOT_SPECIFIED
}				t_length;

typedef enum	e_spec
{
	S_DECIMAL, OCTAL, HEX_UPPER, U_DECIMAL, CHAR, STRING, POINTER,
	INVALID_SPEC, HEX_LOWER
}				t_spec;

typedef	struct	s_convertor
{
	t_flags		flags;
	t_pc		precision;
	t_length	length;
	t_bool		format_spec;
}				t_convertor;

int				ft_printf(const char *format, ...);
char			*print_able_digit(t_convertor conv, char *str_arg, int *count);
char			*print_able_string(t_convertor conv, char *str_arg, int *count);
int				master_chef(t_convertor conv, va_list args);
int				get_flag(t_flags *comv_flag, char flag);
int				get_width(t_pc *precision,const char *stream, int prec);

#endif
