/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:36:10 by szaoual           #+#    #+#             */
/*   Updated: 2024/10/28 13:46:51 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
    char *new;
    char *ptr;
    
    new = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
    ptr = new;
    if(!new)
        return NULL;
    while(*s1)
        *ptr++ = *s1++;
    while(*s2)
        *ptr++ = *s2++;
    *ptr = '\0';
    return new;
}