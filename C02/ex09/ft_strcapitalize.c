/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelbouda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:47:28 by yelbouda          #+#    #+#             */
/*   Updated: 2024/07/02 10:55:46 by yelbouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	lowercase;
	int	uppercase;
	int	num;

	i = 0;
	while (str[i])
	{
		lowercase = (str[i -1] >= 'a' && str[i -1] <= 'z');
		uppercase = (str[i -1] >= 'A' && str[i -1] <= 'Z');
		num = (str[i -1] >= '0' && str[i -1] <= '9');
		if (i == 0 || (!lowercase && !num && !uppercase))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 'a' - 'A';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
		i++;
	}
	return (str);
}
