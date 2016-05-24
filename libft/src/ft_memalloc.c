/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 14:58:49 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 15:00:26 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t s)
{
	void	*new_mem;

	new_mem = malloc(s);
	if (!new_mem)
		return (NULL);
	return (ft_memset(new_mem, 0, s));
}
