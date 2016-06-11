/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 10:45:03 by simzam            #+#    #+#             */
/*   Updated: 2016/05/17 22:50:56 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Takes as a parameter the adress of a pointer to a link and frees the memory
 * of this link and every successors of that link using the functions "del"
 * and free(3). Finally the pointer to the link that was just freed
 * must be set to NULL.
 */

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*keep_track;
	t_list	*tracked;

	if (!alst || !*alst)
		return ;
	tracked = *alst;
	while (tracked)
	{
		keep_track = tracked->next;
		ft_lstdelone(&tracked, del);
		tracked = keep_track;
	}
	*alst = NULL;
}
