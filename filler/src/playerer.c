/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin- <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/09 12:21:31 by jomeirin-         #+#    #+#             */
/*   Updated: 2016/06/09 18:18:46 by jomeirin-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		look(int *piece_x, int *piece_y, int i, t_data *board, t_data *piece)
{
	return (0);
}

int		check(t_data *board, t_data *piece, int y, int x)
{
	int	piece_x;
	int	piece_y
	int i;

	piece_x = 0;
	piece_y = 0;
	i = 0;
	look(&piece_x, &piece_y, i, &board, &piece)
}

void	play(t_data *board, t_data *piece)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < board->width)
	{
		while (j < board->len)
		{
			if(board->data[i][j] == board->player)
			{
				board->x = i;
				board->y = j;
				if (check(board, piece)
					return ;
			}
			if(board->data[i][j] == board->player + 32)
			{
				board->x = i;
				board->y = j;
				if (check(board, piece)
					return ;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

