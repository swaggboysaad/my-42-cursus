/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:24:16 by szaoual           #+#    #+#             */
/*   Updated: 2024/10/27 16:27:03 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size) {
    void *ptr = malloc(count * size);
    if(ptr == NULL)
        return NULL;
    ft_memset(ptr, 0,count * size);
    
    return ptr;
}