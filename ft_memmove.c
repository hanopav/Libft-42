/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:02:07 by phanosek          #+#    #+#             */
/*   Updated: 2023/01/11 16:19:07 by phanosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void *ft_memmove(void *str1, const void *str2, unsigned int n)
{
	
	char *owndst = str1;
	const char *ownsrc = str2;
	
  int	i;
  i = 0;
  	while(n > 0)
    	{
      	owndst[i] = ownsrc[i];
		i++;
      	n--;
    	}
	return (str1);
  }
