/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_table.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin- <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/07 10:18:09 by jomeirin-         #+#    #+#             */
/*   Updated: 2016/06/07 10:20:09 by jomeirin-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static int	find_str(char const *big, char const *little)
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

char	**get_board(int from, t_data *data, char *line)
{
	char		**specs;
	char		**board;
	int			i;
	int			offset;

	i = 0;
	specs = ft_strsplit(line, ' ');
	data->width = atoi(*(specs + 1));
	data->len = atoi(*(specs + 2));
	board = (char **)malloc(data->width * sizeof(char *));
	
	if (ft_strncmp(line, "Platua", 2) == 0)
	{
		get_next_line(from, &line);
		offset = 4;
	} else offset = 0;
	while (i < data->width && get_next_line(from, &line) == 1)
	{
	//write(0, "ass", 3);
		board[i] = ft_strdup(line + offset);
		i++;
		free(line);
	}
	ft_memdel((void **)specs);
	return (board);
}

/*static int		start_of_bf_content(char *s)
{
	return (ft_isdigit(*s) && ft_isdigit(*(s + 1) && ft_isdigit(*(s + 2))));
}*/
char		get_player(char *line)
{
	char		*temp;

	temp = ft_strstr(line, "p");
	temp++;
	if (*temp == '1')
		return ('O');
	else return ('X');
}
int		get_stream(int from, int to)
{
	char		*line;
	//char		*r;
	int			i;
	t_data		board;
	t_data		piece;
	
	line = NULL;
	i = 0;
	player = '\0';
	while (get_next_line(from, &line) == 1 && *line != '<')
	{
		//i++;
		if (player == '\0' && find_str(line, "/filler"))
		{
			board.player = get_player(line);
			write(to, &player, 1);
			//write(0, "ass", 3);
		}
		//printf("This is the player: %s\n", line);
		if (ft_strncmp(line, "Platua", 2) == 0)
		{
		//write(0, "ass", 3);
			board.data = get_board(from, &board, line);
			write(0, "ass", 3);
			//while (i < board.width)
				//printf("%s\n ", (board.data[i++]));
		}
		if (ft_strncmp(line, "Piece", 2) == 0)
		{
			piece.data = get_board(from, &piece, line);
			//while (i < piece.width)
				//printf("%s\n", (piece.data[i++]));
		}
		//write(to, line, ft_strlen(line));
		//write(to, "\n", 1);
	}
	write(to, "******\n", 7);
	return (0);
}
