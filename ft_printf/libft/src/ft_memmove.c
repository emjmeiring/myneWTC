/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:06:47 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 17:02:46 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	temp[n];

	i = 0;
	while (i < n)
	{
		temp[i] = *((char*)(src + i));
		i++;
	}
	i = 0;
	while (i < n)
	{
		*((char*)(dest + i)) = temp[i];
		i++;
	}
	return (dest);
}
