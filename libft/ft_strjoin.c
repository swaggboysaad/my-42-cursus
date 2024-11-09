/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:06:55 by szaoual           #+#    #+#             */
/*   Updated: 2024/11/09 18:19:43 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    if(!s1 || !s2)
        return (NULL);
            
    size_t len1 = ft_strlen(s1);
    size_t len2 = ft_strlen(s2);
        
    char *newstr = malloc(len1 + len2 + 1);
    if(!newstr)
        return (NULL);
        
    ft_memcpy(newstr, s1, len1);
    ft_memcpy(newstr + len1, s2, len2);
        
    newstr[len1 + len2] = '\0';
    return (newstr);
}