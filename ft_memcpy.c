/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:30:51 by phanosek          #+#    #+#             */
/*   Updated: 2023/01/13 15:49:19 by phanosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void  *ft_memcpy(void *dst, const void *src, unsigned int c)
{
	char *owndst = dst;
	const char *ownsrc = src;
	
  int	i;
  i = 0;
  
	if ((owndst != NULL) && (ownsrc != NULL))
  	{
  	while(c != '\0')
    	{
      	owndst[i] = ownsrc[i];
		i++;
      	c--;
    	}
  	}
  	return(dst);
}