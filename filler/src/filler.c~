/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam   <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/07 08:20:08 by simzam            #+#    #+#             */
/*   Updated: 2016/06/09 18:18:43 by arnovan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	load_data(int from, int to)
{
	to = open("myne.txt", O_WRONLY | O_CREAT | O_APPEND, 0666);
	from = open("test2.txt", O_RDONLY | O_CREAT | O_APPEND, 0666);
	get_stream(from, to);
	
}

int		main(void) 
{
	static int		to;
	static int		from;

	load_data(from, to);
	close(from);
	close(to);
	return 0;
}
