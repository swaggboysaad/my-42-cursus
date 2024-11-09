/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:07:03 by szaoual           #+#    #+#             */
/*   Updated: 2024/11/09 20:53:49 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len) {
    if (!s)
        return NULL;

    size_t s_len = ft_strlen(s);

    if (start >= s_len)
    {
        char *empty = malloc(1);
        if (empty)
            empty[0] = '\0';
        return empty;
    }

    if (len > s_len - start)
        len = s_len - start;

    char *substr = malloc(len + 1);
    if (!substr)
        return NULL;

    ft_strlcpy(substr, s + start, len + 1);

    return substr;
}