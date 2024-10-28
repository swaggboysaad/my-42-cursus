/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:48:12 by tchevrie          #+#    #+#             */
/*   Updated: 2024/10/28 11:49:58 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2) {
    char *new;
    char *ptr;

    new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!new) {
        return NULL;
    }

    ptr = new; // Create a pointer to track the position in the new string

    // Copy s1 to new
    while (*s1) {
        *ptr++ = *s1++; // Copy the character and move both pointers
    }

    // Copy s2 to new
    while (*s2) {
        *ptr++ = *s2++; // Copy the character and move both pointers
    }

    *ptr = '\0'; // Null-terminate the new string

    return new; // Return the concatenated string
}