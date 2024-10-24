/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:03:03 by szaoual           #+#    #+#             */
/*   Updated: 2024/10/24 17:33:59 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <libft.h>

void	*ft_memset(void *b, int c, size_t len)
{
    size_t i = 0;
    unsigned char *ptr;
    if(!b)
        return (NULL);
        ptr = (unsigned char *)b;
    while(i < len)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return b;
}