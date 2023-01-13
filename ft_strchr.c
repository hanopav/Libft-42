/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:04:35 by phanosek          #+#    #+#             */
/*   Updated: 2023/01/12 17:09:31 by phanosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr (const char *str, int c)
{
	int i;
	i = 0;
	
	if (str == 0)
		return (0); //NULL shows an error ???
	
	while (str[i] == '\0')
	{
		if (str[i] == (char)c)
			return (char *)(str + i);
		i++;
	}	
	return (0);
}
