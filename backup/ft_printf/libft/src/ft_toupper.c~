/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 16:10:30 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 16:11:23 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_toupper(char *str)
{
	int		pos;
	int		is_lower;

	pos = -1;
	while (*(str + (++pos)))
	{
		is_lower = *(str + pos) >= 97 && *(str + pos) <= 122;
		if (ft_isalpha(*(str + pos)) && is_lower)
			*(str + pos) -= 32;
	}
	return (str);
}
