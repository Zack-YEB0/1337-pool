/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelbouda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:04:50 by yelbouda          #+#    #+#             */
/*   Updated: 2024/07/10 13:06:05 by yelbouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <unistd.h>
int ft_strlen(char *len)
{
    int i;
    i = 0;
    
    while (len[i])
    {
        i++;
    }
    return (i);
}
 char *ft_rev_print (char *str)
 {
     int i;
     i = ft_strlen(str);
     while (str[i] > 0)
     {
         write (1,&str[i],1);
         i--;
     }
     write (1,"\n",1);
     return (str);
 }
