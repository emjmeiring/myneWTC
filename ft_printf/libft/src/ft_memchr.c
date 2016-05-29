/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:19:26 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 17:06:54 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_str;

	new_str = (unsigned char*)str;
	i = 0;
	while (i < n)
	{
		if (*((char*)(str + i)) == ((char)c))
			return (new_str + i);
		i++;
	}
	return (NULL);
}
