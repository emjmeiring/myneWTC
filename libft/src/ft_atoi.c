/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 13:06:13 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/15 14:49:34 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *nptr)
{
	int		res;
	int		lctrl;
	int		sign;

	lctrl = 0;
	res = 0;
	sign = 1;
	if (*nptr == 45)
	{
		nptr++;
		sign = -1;
	}
	while (*(nptr + lctrl))
		res = res * 10 + (*(nptr + (lctrl++)) - '0');
	return (res * sign);
}
