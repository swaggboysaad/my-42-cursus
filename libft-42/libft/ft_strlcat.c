/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:32:38 by tchevrie          #+#    #+#             */
/*   Updated: 2024/10/31 14:19:58 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize) {
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);
    size_t i;
	i = 0;

    if(dstsize <= dst_len)
	{
		return dstsize+src_len;
	}

    while(src[i] && (dst_len + i) < (dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}

    dst[dst_len + i] = '\0';
	
    return dst_len + src_len;
}
