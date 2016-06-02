/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 11:22:58 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/24 12:09:54 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/includes/libft.h"
#include <stdio.h>

void	buff_line(char **line, char *buffer)
{
	char	*buff_mem;
	int		length;
//printf("0)))))");
	length = ft_strlen(*line) + ft_strlen(buffer);
	buff_mem = ft_strnew(length);
	buff_mem = ft_strcpy(buff_mem, *line);
//printf("%s :", line);
	buff_mem = ft_strncat(buff_mem, buffer, length);
	ft_memdel((void **)line);
	*line = ft_strcpy(ft_strnew(length*2), buff_mem);
//printf("%s :", buff_mem);
}

void	handle_format(const char *format, va_list args)
{
	const char	*runner;
	int			i;
	int			shift;

	i = 0;
	shift = 2;
	runner = format;
	while (*runner != '\0')
	{
		if (*runner == '%')
		{
			//ft_putstr(va_arg(args, char *));
			shift = specifier_lexer(runner, args);
			runner += shift;
		}else
		{
			ft_putchar(*runner);
			runner++;
			i++;
		}
	}
}

int		ft_printf(const char *format, ...)
{
	va_list			args;

	va_start(args, format);
	handle_format(format, args);
	va_end(args);
	return (10);
}
/*
printf("runner: %s\n", runner);
			formatted = found_format(&runner, args);
			printf("formatted: %s\n", formatted);
			buff_line(&tot_str, formatted);
			i = ft_strlen(formatted);
			//runner+=2;
*/
