/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:58:17 by phanosek          #+#    #+#             */
/*   Updated: 2023/01/12 15:20:34 by phanosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isalnum(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (0);
	}
	
		while ((str[i] >= 'a' && str[i] <= 'z') || 
		(str[i] >= 'A' && str[i] <= 'Z') ||
		(str[i] >= '0' && str[i] <= '9'))
		{
			i++;
		}
			if (str[i] == '\0')
			{
				return (1);
			}
		else 
			return (0);
}