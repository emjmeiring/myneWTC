/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 13:05:55 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 16:03:36 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	int		s1;
	int		s2;

	i = 0;
	s1 = 0;
	s2 = 0;
	while (*(str1 + i) && i < n)
	{
		s1 = s1 + *(str1 + i);
		i++;
	}
	i = 0;
	while (*(str2 + i) && i < n)
	{
		s2 = s2 + *(str2 + i);
		i++;
	}
	return (s1 - s2);
}
