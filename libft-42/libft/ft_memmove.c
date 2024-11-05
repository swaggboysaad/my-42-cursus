/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:56:21 by tchevrie          #+#    #+#             */
/*   Updated: 2024/11/04 18:06:48 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst,const void *src,size_t len)
{
    size_t i = 0;
    
    if(dst < src)
    {
        while(i < len)
	    {
		    ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		    i++;
	    }
        return (dst);
    }
    else
    {
        i = len - 1;

        while(i >= 0)
	    {
		    ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		    i--;
        }
        return (dst);
    }

}
