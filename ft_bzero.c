/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:09:20 by phanosek          #+#    #+#             */
/*   Updated: 2023/01/12 16:50:59 by phanosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

void ft_bzero (void *s, int n)
{
	int i;
	i = 0;
	
	if (s == 0)
		return ;
	while (i < n)
	{
		*(char*)(s + i) = 0;
		i++;
	}
}