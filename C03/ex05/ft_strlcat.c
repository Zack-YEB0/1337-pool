/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelbouda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:21:19 by yelbouda          #+#    #+#             */
/*   Updated: 2024/07/08 11:27:16 by yelbouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	toul_src;
	unsigned int	toul_dest;

	toul_src = ft_strlen(src);
	toul_dest = ft_strlen(dest);
	i = 0;
	if (size == 0)
		return (toul_src);
	if (size <= toul_dest)
		return (toul_src + size);
	while (src[i] != '\0' && toul_dest + i < size - 1)
	{
		dest[toul_dest + i] = src[i];
		i++;
	}
	dest[toul_dest + i] = '\0';
	return (toul_dest + toul_src);
}
