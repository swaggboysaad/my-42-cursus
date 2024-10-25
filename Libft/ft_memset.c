/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:03:03 by szaoual           #+#    #+#             */
/*   Updated: 2024/10/25 21:27:15 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>


void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char	*ptr;

	//if (!b)
	//	return (NULL);
	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int main()
{
	char b[] = "123456789";
	int c = 'X';
	printf("MY FUNCTION: %s\n",ft_memset(((void *)0), 'a', 12));
	printf("C: %s\n",memset(((void *)0), 'a', 12));
}
*/