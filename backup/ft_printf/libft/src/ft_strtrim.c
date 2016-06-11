/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 16:54:39 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 16:54:42 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	const char	*s2;

	if (s == NULL)
		return (NULL);
	while (*s == '\n' || *s == '\r' || *s == ' ')
		s++;
	if (s == '\0')
		return (ft_strnew(0));
	s2 = s + (ft_strlen(s) - 1);
	while (*s2 == '\n' || *s == '\r' || *s == ' ')
		s2--;
	return (ft_strsub(s, 0, (s2 - s) + 1));
}
