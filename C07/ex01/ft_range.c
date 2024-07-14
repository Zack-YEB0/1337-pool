/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelbouda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:49:26 by yelbouda          #+#    #+#             */
/*   Updated: 2024/07/14 17:13:56 by yelbouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr_of_int;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	arr_of_int = (int *)malloc((max - min) * sizeof(int));
	if (arr_of_int == NULL)
		return (NULL);
	while (i < max - min)
	{
		arr_of_int[i] = min + i;
		i++;
	}
	return (arr_of_int);
}
