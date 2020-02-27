/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 22:13:04 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/26 22:13:05 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter the address of a pointer to a link and frees the memory
** of this link and every successors of that link using the functions del and
** free(3). Finally the pointer to the link that was just freed must be set to
** NULL (quite similar to the function ft_memdel from the mandatory part).
*/

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del) (void *, size_t))
{
	t_list	*head;

	if (!*alst || !alst || !del)
		return ;
	while (*alst)
	{
		head = (*alst)->next;
		del ((*alst)->content, (*alst)->content_size);
		free (*alst);
		alst = &head;
	}
	ft_lstdelone(alst, del);
}
