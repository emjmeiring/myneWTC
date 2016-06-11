/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:01:38 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 15:06:36 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*c_str;

	i = 0;
	c_str = (char*)(str);
	while (i < n && *(c_str + i) != '\0')
	{
		*(c_str + i) = c;
		i++;
	}
	*(c_str + n) = '\0';
	return (c_str);
}
