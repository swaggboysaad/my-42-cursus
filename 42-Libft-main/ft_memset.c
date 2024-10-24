/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:20:37 by tchevrie          #+#    #+#             */
/*   Updated: 2024/10/24 15:17:55 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char	*ptr;

	if (!b)
		return (NULL);
	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
int main() {
    char buffer[11];  // 10 characters + 1 for the null terminator

    // Use ft_memset to fill the buffer with '*'
    ft_memset(buffer, '*', 10);

    // Null-terminate the string
    buffer[10] = '\0';

    // Print the result
    printf("Buffer after memset: %s\n", buffer);  // Output: **********
    
    return 0;
}