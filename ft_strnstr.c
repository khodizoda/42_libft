/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 18:37:57 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/20 18:37:58 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		pos;
	char	*h;

	pos = 0;
	h = (char *)haystack;
	if (!*needle)
		return (h);
	while (len > 0 && *h)
	{
		needle = needle - pos;
		pos = 0;
		while (*h == *needle && len-- > 0)
		{
			h++;
			needle++;
			pos++;
			if (!*needle)
				return (h - pos);
		}
		h = h - pos + 1;
		len = len + pos - 1;
	}
	return (NULL);
}
