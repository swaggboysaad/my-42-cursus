/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:32:48 by szaoual           #+#    #+#             */
/*   Updated: 2024/10/27 13:54:06 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0;
    size_t j;

    if (!needle[0])
        return (char *)haystack;

    while (haystack[i] && i < len) {
        j = 0;
        while (haystack[i + j] == needle[j] && needle[j] && i + j < len)
            j++;
        if (!needle[j])
            return (char *)(haystack + i);
        i++;
}

return NULL;
}