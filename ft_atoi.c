/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:22:35 by phanosek          #+#    #+#             */
/*   Updated: 2023/01/12 16:34:33 by phanosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	counter;
	int	base;
	int check_sign;

	i = 0;
	counter = 0;
	base = 0;
	
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			i++;
	
	check_sign = (str[i] == '-') ? -1 : 1;

	if (check_sign == -1 || str[i] == '+')
		i++;
	
	while (str[i] >= '0' && str[i] <= '9')
	{
		base = 10 * base + (str[i] - '0');
		i++;
	}
	return (base * check_sign);
}