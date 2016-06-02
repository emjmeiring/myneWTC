/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 16:37:03 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 16:37:23 by goisetsi/simzam  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int c)
{
	char	*str;

	if (c > 2147483647 || c < -2147483647)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char *))))
		return (NULL);
	if (c >= 0)
	{
		while (c != 0)
		{
			*(--str) = '0' + (c % 10);
			c /= 10;
		}
		return (str);
	}
	else
	{
		while (c != 0)
		{
			*(--str) = '0' - (c % 10);
			c /= 10;
		}
		*(--str) = '-';
	}
	return (str);
}
