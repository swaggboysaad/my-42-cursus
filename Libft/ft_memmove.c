/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:29:52 by szaoual           #+#    #+#             */
/*   Updated: 2024/10/24 18:29:52 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;

    if (dst == src || len == 0)
        return dst;

    if (dst < src) // Non-overlapping case
    {
        i = 0;
        while (i < len)
        {
            *(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
            i++;
        }
    }
    else 
    {
        i = len;
        while (i > 0)
        {
            i--;
            *(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
        }
    }

    return dst;
}
int main() {
    char src_non_overlap[] = "abcdef";
    char dst_non_overlap[10];

    char src_overlap[] = "1234567890";
    char dst_overlap[15];

    // Non-overlapping test
    ft_memmove(dst_non_overlap, src_non_overlap, 6); // Copy "abcdef" to dst_non_overlap
    printf("Non-overlapping memmove: %s\n", dst_non_overlap); // Expected: "abcdef"

    // Overlapping test
    ft_memmove(src_overlap + 2, src_overlap, 8); // Move "12345678" within the same array
    printf("Overlapping memmove: %s\n", src_overlap); // Expected: "1212345678"

    return 0;
}