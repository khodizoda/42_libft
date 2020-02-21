/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:24:26 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/20 15:24:27 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char a;
	char *str;

	a = (char)c;
	str = (char *)s;
	while (*str)
	{
		if (*str == a)
			return (str);
		str++;
	}
	if (*str == '\0' && a == '\0')
		return (str);
	return (NULL);
}
