/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:38:20 by phanosek          #+#    #+#             */
/*   Updated: 2023/01/13 15:47:53 by phanosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *str, int c, size_t n)
{
	size_t i;
	i = 0;

	if (!str)
		return (NULL);
	while (i < n)
	{
		if (*(unsigned char*)(str + i) == (unsigned char)c)
			return ((void*)(str + i));
		i++;
	}
	return (NULL);
}