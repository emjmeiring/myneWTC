/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 16:52:39 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 16:54:18 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*new_str;
	size_t		i;

	i = 0;
	new_str = ft_strnew(len);
	if (new_str == NULL)
		return (NULL);
	while (i < len)
		*(new_str) = *(s + start + (i++));
	return (new_str);
}
