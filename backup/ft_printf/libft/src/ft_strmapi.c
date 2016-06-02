/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:50:05 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 15:50:37 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, void (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = ft_strnew(ft_strlen(s));
	ft_strcpy(str, s);
	while (*(str + i))
	{
		(*f)(i, *(str + i));
		i++;
	}
	return (str);
}
