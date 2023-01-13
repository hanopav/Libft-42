/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:01:58 by phanosek          #+#    #+#             */
/*   Updated: 2023/01/12 17:03:37 by phanosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

char *ft_strrchr (const char *str, int c)
{
	int i;
	i = 0;
	
	while (str[i] != '\0')
		i++;
	while (str[i] >= 0)
	{
		if (str[i] == (char)c)
			return (char *)(str + i);
		i--;
	}	
	return (NULL);
}

	// return (char *)((unsigned char)*str == c ? str : NULL); //alternative approach, 
	// which probably cannot handle the target sign itself?
