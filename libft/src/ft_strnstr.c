/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 13:05:21 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 16:10:09 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *hay, char *needle, size_t n)
{
	int		i;
	size_t	j;

	i = 0;
	while (*(hay + i))
	{
		j = 0;
		while (*(hay + i) == *(needle + j) && j < n)
		{
			i++;
			j++;
			if (*(needle + j) == '\0' || j == n)
				return (hay + (i - j));
		}
		i -= j;
		i++;
	}
	return (NULL);
}
