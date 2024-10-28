/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:54:49 by szaoual           #+#    #+#             */
/*   Updated: 2024/10/28 18:16:03 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	ft_check_set(char const c ,char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
     size_t start = 0;
    size_t end;
    char *new;

    if (!s1 || !set)
        return NULL;

    // Find the starting index after trimming the beginning
    while (s1[start] && ft_check_set(s1[start], set))
        start++;

    // Find the end index after trimming from the end
    end = ft_strlen(s1);
    while (end > start && ft_check_set(s1[end - 1], set))
        end--;

    // Allocate memory for the trimmed string
    new = (char *)malloc((end - start + 1) * sizeof(char));
    if (!new)
        return NULL;

    // Copy trimmed part to new string
    ft_strlcpy(new, s1 + start, end - start + 1);
    return new;
}
