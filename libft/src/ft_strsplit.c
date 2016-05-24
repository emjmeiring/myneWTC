/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 16:51:32 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 16:52:24 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strtrimat(char const *s, char c)
{
	char	*s2;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (*s == '*')
		s++;
	if (s == '\0')
		return (ft_strnew(0));
	s2 = s + (ft_strlen(s) - 1);
	while (*s2 == '*')
		s2--;
	return (ft_strsub(s, 0, (s2 - s) + 1));
}

char	**ft_strsplit(char const *s, char c)
{
	char	*str_trimmed;
	char	split_str[][];

	split_str = &((char*)ft_memalloc();
	if (s != NULL)
		str_trimmed = ft_strtrimat(s, '*');
	else
		return (NULL);
	if (*str_trimmed == '\0')
		return (NULL);
	while (*str_trimmed != '*')
		**(split_str + i) = *(str_trimmed + i);
}
