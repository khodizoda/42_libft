/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:57:15 by gkhodizo          #+#    #+#             */
/*   Updated: 2020/02/20 20:57:16 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	result;

	i = -1;
	sign = 1;
	result = 0;
//	if (ft_strcmp(str, "99999999999999999999999999") == 0)
//		return (-1);
//	else if (ft_strcmp(str, "-99999999999999999999999999") == 0)
//		return (0);
	while ((str[++i] == ' ') || (str[i] == '\n') || (str[i] == '\t') ||
		(str[i] == '\f') || (str[i] == '\r') || (str[i] == '\v') ||
		((str[i] == '+') && (str[i + 1] >= '0')));
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + str[i] - '0';
		else
			break ;
		i++;
	}
	return ((int)result * sign);
}
