/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:22:02 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 15:24:11 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	if ((&(((char*)src)[0]) >= &(((char*)dest)[0]) && (&(((char*)dest)[0]) <=
					(&(((char*)src)[n])))))
		return (NULL);
	else
	{
		while (n--)
		{
			if (*((char*)(src)) == c)
				return (dest + 1);
			*((char*)(dest++)) = *((char*)(src++));
		}
		return (NULL);
	}
}
