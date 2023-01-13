/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:53:46 by phanosek          #+#    #+#             */
/*   Updated: 2023/01/12 15:20:59 by phanosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isalpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (0);
	}
	
		while ((str[i] >= 'a' && str[i] <= 'z') || 
		(str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
		
			if (str[i] == '\0')
			{
				return (1);
			}
			else
			{
				return (0);
			}	
}