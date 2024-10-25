/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:06:13 by szaoual           #+#    #+#             */
/*   Updated: 2024/10/24 18:06:13 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == src) // Check if copying zero bytes or if src and dst are the same
        return dst;
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dst);
}

int main()
{
	char dst[20];
	char src[] = "saad zaoual";
	printf("MY FUNC:%p",ft_memcpy(src, src, 3));
	printf("C FUNC:%p",memcpy(src, src, 3));

}