/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/11 13:20:07 by simzam            #+#    #+#             */
/*   Updated: 2016/06/11 17:02:55 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	is_playable(char *playable, int pi_len)
{
	int		i;

	i = 0;
	while (playable[i] == '.' && i <= pi_len)
		i++;
	return ((i == pi_len));
}

/*
 * Until we find a playable position, who ever calls this function must do it indefinitely
 */

int		run_through_piece(t_data *data, t_player *player)
{
	int		x;
	int		y;
	int		pi_len;

	i = 0;
	j = -1;
	pi_len = ft_strlen(*data->bpiece.bf_content);
	if (player->x + p_len > data->bfield.width)
		return (-1);
	else
	{
		while (1)
		{
			if ((k = is_playable((char *)data->bfield.bf_content[player->x],
							pi_len)) && i < data->bpiece.width)
				i++;
			else
				return (k > 0);
		}
		return (1);
	}
}

/*int		look_ahead(t_bfield field, t_piece piece)
{
	int x;
	int y;

	x = -1;
	while (++x < bfield->width)
	{
		y = -1;
		while (++y < bfield->len)
		{
			if (bfield->bf_content[x][y] == '.' || bfield->bf_content[x][y])
				place_piece(piece, bfield);
		}
	}
}*/
