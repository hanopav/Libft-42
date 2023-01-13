/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:33:25 by phanosek          #+#    #+#             */
/*   Updated: 2023/01/12 15:21:19 by phanosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isdigit(char *digit)
{
	int	i;

	i = 0;
	if (digit[i] == '\0')
	{
		return (0);
	}
	
		while ((digit[i] >= '0' && digit[i] <= '9'))
		{
			i++;
		}
		
			if (digit[i] == '\0')
			{
				return (1);
			}
			else
			{
				return (0);
			}	
}