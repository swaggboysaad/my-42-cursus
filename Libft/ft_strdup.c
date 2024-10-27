/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:40:29 by szaoual           #+#    #+#             */
/*   Updated: 2024/10/27 17:26:49 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strdup(const char *s1)
{
    size_t i;
    i = 0;;
    char *new = malloc((ft_strlen(s1) + 1) * sizeof(char));
    if(!new)
        return NULL;
    while(s1[i])
    {
        new[i] = s1[i];
        i++;
    }
    new[i] = '\0';
    return new;
}