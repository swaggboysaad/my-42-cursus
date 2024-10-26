/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:48:41 by szaoual           #+#    #+#             */
/*   Updated: 2024/10/26 17:42:16 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c) {

    while (*s) {
        if (*s == (char)c) {
            return (char *)s;
        }
        s++;
    }

    if (c == '\0') {
        return (char *)s;
    }

    return NULL;
}
