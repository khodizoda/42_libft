/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:57:41 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/23 14:57:44 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	char *cs1;
	char *cs2;

	cs1 = (char *)s1;
	cs2 = (char *)s2;
	if (!*cs1 && !*cs2)
		return (1);
	while (((*cs1 >= 'a' && *cs1 <= 'z') || (*cs1 >= 'A' && *cs1 <= 'Z')) &&
		((*cs2 >= 'a' && *cs2 <= 'z') || (*cs2 >= 'A' && *cs2 <= 'Z')))
	{
		while (*cs1 == *cs2)
		{
			cs1++;
			cs2++;
			if (!*cs1 && !*cs2)
				return (1);
		}
		break ;
	}
	return (0);
}
