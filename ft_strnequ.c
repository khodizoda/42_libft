/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 15:22:10 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/23 15:22:11 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*cs1;
	char	*cs2;

	cs1 = (char *)s1;
	cs2 = (char *)s2;
	if ((!*cs1 && !*cs2) || n == 0)
		return (1);
	while (((*cs1 >= 'a' && *cs1 <= 'z') || (*cs1 >= 'A' && *cs1 <= 'Z')) &&
		((*cs2 >= 'a' && *cs2 <= 'z') || (*cs2 >= 'A' && *cs2 <= 'Z')) &&
		n-- > 0)
	{
		while (*cs1 == *cs2)
		{
			cs1++;
			cs2++;
			if (!*cs1 && !*cs2)
				return (1);
		}
	}
	return (0);
}
