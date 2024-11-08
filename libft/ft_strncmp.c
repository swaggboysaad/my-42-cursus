/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:04:23 by szaoual           #+#    #+#             */
/*   Updated: 2024/11/05 18:19:45 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
        size_t  i;

        i = 0;
        if (n == 0)
                return (0);
        while (i < n - 1 && s1[i] && s1[i] == s2[i])
                i++;
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
