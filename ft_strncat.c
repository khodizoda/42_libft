/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:10:58 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/20 11:11:00 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t i;
	size_t s1len;

	i = 0;
	s1len = ft_strlen(s1);
	while (i < n && s2[i] != '\0')
	{
		s1[i + s1len] = s2[i];
		i++;
	}
	s1[i + s1len] = '\0';
	return (s1);
}
