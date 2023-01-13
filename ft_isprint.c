/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:36:29 by phanosek          #+#    #+#             */
/*   Updated: 2023/01/12 15:21:27 by phanosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isprint(char *digit)
{
	int	i;

	i = 0;
	if (digit[i] == '\0')
	{
		return (0);
	}
	
		while ((digit[i] >= 32 && digit[i] <= 127))
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