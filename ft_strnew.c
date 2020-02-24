/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:31:31 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/21 19:31:33 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*new;

	i = 0;
	new = (char *)malloc(size * sizeof(char) + 1);
	if (!new)
		return (NULL);
	else
	{
		while (i < size + 1)
		{
			new[i] = '\0';
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
