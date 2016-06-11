/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 16:12:42 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 16:14:30 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *hay, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*(hay + i))
	{
		if (*(hay + i) == *(needle + j))
		{
			i++;
			j++;
		}
		else
			i++;
		if (*(needle + j + 1) == '\0')
			return ((hay + (i - j)));
	}
	return (NULL);
}
