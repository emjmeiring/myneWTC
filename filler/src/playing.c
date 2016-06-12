#include "filler.h"

int	find_strs(char *big, char *little)
{
	int	i;
	int	j;

	i = 0;
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i] == little[j])
		{
			if (little[j + 1] == '\0')
				return (1);
			i++;
			j++;
		}
		i = i - j; //This might just be redudant.
		i++;
	}
	return (0);
}

int		quadrant(int x, int y, int w, int l)
{
	int q;
	if (x > w)
	{
		if (y > l)
			q = 4;
		else q = 2;
	}
	else if (y > l)
		q = 3;
	else q = 1;
	return (q);
}

void	direction(int my_quad, t_intel *intel)
{
	if (my_quad == 1)
	{
		intel->dir_x = 1;
		intel->dir_y = 1;
	}else if (my_quad == 2)
	{
		intel->dir_x = -1;
		intel->dir_y = 1;
	}else if (my_quad == 3)
	{
		intel->dir_x = 1;
		intel->dir_y = -1;
	}else if (my_quad == 4)
	{
		intel->dir_x = -1;
		intel->dir_y = -1;
	}
}

int		listener(t_data board, t_intel *intel, char player)
{
	int i;
	int found;

	i = 0;
	found = 0;
	while (i < board.width && !found)
	{
		found += find_strs(&board.data[i][intel->half_len], &player);
		i++;
	}
	i = 0;
	while (i < board.len && !found)
	{
		found += 2 * find_strs(&board.data[intel->half_w][i], &player);
		i++;
	}
	return (found);
}

void	devider(t_data board, t_intel *intel)
{
	intel->half_w = board.width/2;
	intel->half_len = board.len/2;
	intel->en_quad = quadrant(board.enemy.x, board.enemy.y, intel->half_w,
			 intel->half_len);
	intel->my_quad = quadrant(board.me.x, board.me.y, intel->half_w,
			 intel->half_len);
	direction(intel->my_quad, intel);
}

void	playing(t_data board, t_data piece)
{
	t_intel intel;
	int found_me;
	int found_enemy;

	devider(board, &intel);
	found_me = listener(board, &intel, board.me.player);
	found_enemy = listener(board, &intel, board.enemy.player);
	printf("%d:\n", found_enemy);
	printf("%d:\n", found_me);
	printf("%d:\n", intel.half_w);
	printf("%d:\n", intel.half_len);
	printf("%d:\n", intel.dir_x);
	printf("%d:\n", intel.dir_y);
	printf("%d:\n", intel.en_quad);
	printf("%d:\n", intel.my_quad);
	int i = 0;
	while (i < piece.width)
		printf("%s\n", (piece.data[i++]));
	/*if (found_me == Y_AXIS)
		//return (found);
	else if (found_me == X_AXIS)
		//return (found);
	else if(found_me == XANDY_AXIS)
		//return (found)
	else place_move(board, piece, &intel, players);
*/
}
