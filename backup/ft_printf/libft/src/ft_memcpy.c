/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:14:42 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 15:18:59 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if ((&(((char*)src)[0]) >= &(((char*)dest)[0]) && (&(((char*)dest)[0]) <=
					(&(((char*)src)[n])))))
		return (ft_memmove((char*)dest, (char*)src, (int)n));
	else
		while (n--)
			*((char*)(dest++)) = *((char*)(src++));
	return (dest);
}
