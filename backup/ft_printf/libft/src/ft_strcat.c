/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:38:45 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 15:40:31 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	size_t	size;

	size = ft_strlen(dest);
	i = -1;
	while (*(src + (++i)))
	{
		*(dest + size + i - 1) = *(src + i);
	}
	*(dest + size + i) = '\0';
	return (dest);
}
