/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 16:02:36 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/21 16:02:38 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t			i;
	unsigned char	*mem;

	if (size > 0 && size < ULONG_MAX)
	{
		mem = (unsigned char *)malloc(size * sizeof(char) + 1);
		if (!mem)
			return (NULL);
		else
		{
			i = -1;
			while (++i < size + 1)
				mem[i] = 0;
			return (mem);
		}
	}
	return (NULL);
}
