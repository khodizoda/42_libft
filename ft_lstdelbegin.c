/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelstart.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:45:03 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/27 17:45:04 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Deletes node from the begining of a list.
*/

#include "libft.h"

void	ft_lstdelbegin(t_list **alst)
{
	t_list *tmp;

	tmp = *alst;
	*alst = (*alst)->next;
	free(tmp);
}
