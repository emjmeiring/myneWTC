/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 13:03:41 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 15:54:48 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	int		k;

	i = 0;
	k = 0;
	while (*(dest + k))
	{
		k++;
	}
	while (*(src + i) && i < n)
	{
		*(dest + k + i) = *(src + i);
		i++;
	}
	*(dest + k + i) = '\0';
	return (dest);
}
