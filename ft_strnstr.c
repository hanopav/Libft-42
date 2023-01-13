/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:07:32 by phanosek          #+#    #+#             */
/*   Updated: 2023/01/13 13:01:15 by phanosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *str, const char *to_find, int len)
{
	int	i;
	int	a;

	i = 0;
	a = 0;

	if (!str || !to_find) // if both empty, return NULL
		return (NULL);
	
	if (!to_find[0] || !to_find) // if little is empty, big is returned
		return ((char*)str);
		
	while (str[i] || i < len)
	{
		while ((str[i + a] == to_find[a]) && 
		to_find[i] && i + a < len && str[i + a])
			a++;
		if (!to_find[a])
			return ((char*)(str + i));
		i++;
	}
	return (0);
}