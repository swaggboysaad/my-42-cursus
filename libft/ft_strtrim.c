/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:44:29 by szaoual           #+#    #+#             */
/*   Updated: 2024/11/09 19:53:00 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    if(!s1 || !set)
        return (NULL);
    size_t start = 0;
    size_t end = ft_strlen(s1);

    while(s1[start] && ft_strrchr(set,s1[start]))
        start++;
    while(end > start && ft_strrchr(set,s1[end - 1]))
        end--;
    
    char *trimmed_str = malloc(end - start + 1);
    if(!trimmed_str)
        return (NULL);
    ft_memcpy(trimmed_str, s1 + start, end - start);
    trimmed_str[end - start] ='\0';
    return(trimmed_str);
}