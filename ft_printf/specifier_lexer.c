/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_lexer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/28 14:08:58 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/28 14:09:54 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/includes/libft.h"
#include <stdio.h>
/*
 * 
 */

int		padding(const char *runner, int format_len)
{
	char	*pad_amount;
	int		i;

	i = 0;
	pad_amount = ft_strnew(format_len*2);
	while (ft_isdigit(*(runner + i)))
	{
		pad_amount = ft_strncat(pad_amount, (runner + i), 1);
		i++;
	}
	return (atoi(pad_amount));
}
void	print_string(const char *runner, char *string, int format_len)
{
	int		i;
	int		k;
	int		pad;
	int		str_len;
	int		max;

	max = 0;
	i = 1;
	k = 0;
	str_len = ft_strlen(string);
	if (format_len == 1)
		ft_putstr(string);
	if (*(runner + i) == '-')
	{
		i++;
		pad = padding((runner + i),format_len);
		printf("**%d**", pad);
		if (*(runner + (++i)) == '.')
		{
			i++;
			max = padding((runner + i),format_len);
			if (max < str_len)
				str_len = max;
		}

		while (pad > k || k < str_len)
		{
			if (k < str_len)
				ft_putchar(*(string + k));
			else ft_putchar(32);
			k++;
		}
	}
}

int		specifier_lexer(const char *runner, va_list args)
{
	int		sub_num;
	char	current;

	sub_num = 1;
	while (*(runner + sub_num) && sub_num !=0)
	{
		current = *(runner + sub_num);
		if (current == '%')
		{
			ft_putchar('%');
			return(sub_num + 1);
		}else if (current == 's')
		{
			//printf("**%d**", sub_num);
			print_string(runner, va_arg(args, char *), sub_num);
			return (sub_num + 1);
		}/*else if (current == 'S')
		if (current == 'p')
		if (current == 'd' || current == 'i')
		if (current == 'o')
		if (current == 'O')
		if (current == 'u')
		if (current == 'U')
		if (current == 'x')
		if (current == 'X')
		if (current == 'c')
		if (current == 'C')
		{}*/
		sub_num++;
	}
	return (0);
}
