/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 20:15:19 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/21 20:15:21 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Sets every character of the string to the value ’\0’.
*/

#include "libft.h"

void	ft_strclr(char *s)
{
	while (*s)
	{
		*s = '\0';
		s++;
	}
	*s = '\0';
	return ;
}
