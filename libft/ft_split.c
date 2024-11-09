/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:08:57 by szaoual           #+#    #+#             */
/*   Updated: 2024/11/09 20:43:57 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t count_words(const char *s, char c) {
    size_t count = 0;
    int in_word = 0;

    while (*s) {
        if (*s == c)
        {
            in_word = 0;
        } else if (!in_word)
        {
            in_word = 1;
            count++;
        }
        s++;
    }
    return count;
}
static char *get_next_word(const char **s, char c) {
    while (**s && **s == c)
        (*s)++;

    const char *start = *s;

    while (**s && **s != c)
        (*s)++;

    size_t len = *s - start;

    if (len == 0) return NULL;

    char *word = malloc(len + 1);
    if (!word)
        return NULL;

    ft_memcpy(word, start, len);
    word[len] = '\0';

    return word;
}
char **ft_split(char const *s, char c) {
    if (!s)
        return NULL;

    size_t word_count = count_words(s, c);
    char **result = malloc((word_count + 1) * sizeof(char *));
    
    if (!result)
        return NULL;

    size_t i = 0;
    
    while (i < word_count) {
        result[i] = get_next_word(&s, c);
        
        if (!result[i])
        {
            while (i--)
                free(result[i]);
            
            free(result);
            return NULL;
        }
        
        i++;
    }

    result[i] = NULL;
    return result; 
}