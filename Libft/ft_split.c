/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:23:35 by szaoual           #+#    #+#             */
/*   Updated: 2024/10/31 14:09:11 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t count_words(const char *s, char c) {
    size_t words = 0;
    size_t i = 0;
    while (s[i]) {
        if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
            words++;
        i++;
    }
    return words;
}

char *copy_word(const char *start, int len) {
    char *word = malloc(sizeof(char) * (len + 1));
    if (!word)
        return NULL;
    ft_memcpy(word, start, len);
    word[len] = '\0';
    return word;
}
void free_split(char **result) {
    if (result) {
        int i = 0;
        while (result[i]) { 
            free(result[i]);
            i++;
        }
        free(result); 
    }
}
char **ft_split(const char *s, char c) {
    if (!s)
        return NULL;

    int words = count_words(s, c);
    char **result = malloc(sizeof(char *) * (words + 1));
    if (!result)
        return NULL;

    int i = 0;
    while (*s) {
        if (*s != c) {
            const char *start = s;
            int len = 0;
            while (*s && *s != c) {
                len++;
                s++;
            }
            result[i] = copy_word(start, len);
            if (!result[i]) {
                free_split(result);
                return NULL;
            }
            i++;
        } else {
            s++;
        }
    }
    result[i] = NULL;
    return result;
}