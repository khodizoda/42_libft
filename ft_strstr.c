/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:55:27 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/20 17:55:29 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		pos;
	char	*h;

	h = (char *)haystack;
	if (!*needle)
		return (h);
	while (*h)
	{
		needle = needle - pos;
		pos = 0;
		while (*h == *needle)
		{
			h++;
			needle++;
			pos++;
			if (!(*needle))
				return (h - pos);
		}
		h = h - pos;
		h++;
	}
	return (NULL);
}
