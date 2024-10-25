/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:54:13 by szaoual           #+#    #+#             */
/*   Updated: 2024/10/25 15:35:38 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t i = 0;
    while(i  < n)
    {
        *(unsigned char *)(s + i ) = 0;
        i++;
    }
}
/*
int main() {
    char buffer[10] ="123456789";
    printf("Before ft_bzero: %s\n", buffer); 
    
    ft_bzero(buffer, 9);
    
    printf("After ft_bzero: %s\n", buffer);
    
    return 0;
}
*/