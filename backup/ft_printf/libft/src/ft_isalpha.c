/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 14:55:05 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 14:55:13 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(char c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
