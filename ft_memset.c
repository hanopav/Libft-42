/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:52:04 by phanosek          #+#    #+#             */
/*   Updated: 2023/01/12 15:22:11 by phanosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void  *ft_memset(void *b, int c, int a)
{
  int	i;
  unsigned char *p = b; 
  i = 0;
  while(a > 0)
    {
      p[i] = c;
      i++;
      a--;
    }
  return(b);
}

