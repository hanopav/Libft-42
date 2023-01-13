/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:43:01 by phanosek          #+#    #+#             */
/*   Updated: 2023/01/12 15:21:37 by phanosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen (char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i++;
	
	return (i);
}

int main ()
{
	printf("%d\n", ft_strlen("hello dolly"));
}