/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:28:03 by tchevrie          #+#    #+#             */
/*   Updated: 2024/10/25 18:37:44 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dst || !src)
		return (0);

	i = 0;
	
	
	if (dstsize == 0)
		return (ft_strlen(src));

	
	while (src[i]&& i < dstsize - 1) // 
	{
		dst[i] = src[i];
		i++;
	}

	dst[i] = '\0'; 

	return (ft_strlen(src)); 
}

