/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 16:07:17 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 16:09:20 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_tolower(char *str)
{
	int	pos;
	int is_cap;

	pos = -1;
	while (*(str + (++pos)))
	{
		is_cap = (*(str + pos) >= 65 && *(str + pos) <= 90);
		if (ft_isalpha(*(str + pos)) && is_cap)
			*(str + pos) += 32;
	}
	return (str);
}
