/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 19:01:12 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/23 19:01:13 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*concat;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	concat = (char *)malloc(sizeof(s1len + s2len + 1));
	if (!concat)
		return (NULL);
	while (*s1)
	{
		*concat = *s1;
		concat++;
		s1++;
	}
	while (*s2)
	{
		*concat = *s2;
		concat++;
		s2++;
	}
	*concat = '\0';
	return (concat - s1len - s2len);
}
