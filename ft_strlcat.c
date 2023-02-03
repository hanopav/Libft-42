/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:27:27 by phanosek          #+#    #+#             */
/*   Updated: 2023/01/19 13:15:15 by phanosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned char	i;
	unsigned char	str;

	i = 0;
	str = ft_strlen(dst);
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	while (src[i] != '\0' && (str + 1) < size)
	{
		dst[str] = src[i];
		i++;
		str++;
	}
	dst[str] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
