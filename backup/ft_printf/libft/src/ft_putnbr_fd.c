/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 16:55:26 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 16:56:26 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	max;
	int				sign;

	sign = -1;
	max = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		max = sign * n;
	}
	if (max >= 10)
	{
		ft_putnbr_fd(max / 10, fd);
		ft_putnbr_fd(max % 10, fd);
	}
	else
		ft_putchar_fd(max + '0', fd);
}
