/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 12:48:23 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/23 12:48:24 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	len;
	char	*new;
	char	*cs;

	i = 0;
	len = ft_strlen(s);
	new = (char *)malloc(sizeof(len + 1));
	if (!new)
		return (NULL);
	cs = (char *)s;
	while (s[i] != '\0')
	{
		new[i] = f(cs[i]);
		i++;
	}
	return (new);
}
