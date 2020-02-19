/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:16:41 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/19 14:16:43 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*cdst;
	char	*csrc;
	char	tmp[len];

	i = 0;
	cdst = (char *)dst;
	csrc = (char *)src;
	while (i < len)
	{
		tmp[i] = csrc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		cdst[i] = tmp[i];
		i++;
	}
	return (dst);
}
