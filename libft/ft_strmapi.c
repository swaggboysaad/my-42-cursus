/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:40:20 by szaoual           #+#    #+#             */
/*   Updated: 2024/11/09 21:52:26 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if (!s || !f) return NULL;

    unsigned int len = 0;
    while (s[len]) len++;

    char *new_str = (char *)malloc(len + 1);
    if (!new_str) return NULL;

    unsigned int i = 0;
    while (i < len) {
        new_str[i] = f(i, s[i]);
        i++;
    }
    new_str[len] = '\0';
    return new_str;
}