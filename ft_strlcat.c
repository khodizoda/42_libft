/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:41:21 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/20 11:41:23 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	char	*cdst;
	char	*csrc;
	size_t	size;
	size_t	dstlen;

	cdst = dst;
	csrc = (char *)src;
	size = dstsize;
	while (size-- != 0 && *cdst != '\0')
		cdst++;
	dstlen = cdst - dst;
	if ((size = dstsize - dstlen) == 0)
		return (dstlen + ft_strlen(src));
	while (*csrc != '\0')
	{
		if (size != 1)
		{
			*cdst++ = *csrc;
			size--;
		}
		csrc++;
	}
	*cdst = '\0';
	return (dstlen + (csrc - src));
}
