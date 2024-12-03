/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:01:02 by szaoual           #+#    #+#             */
/*   Updated: 2024/12/03 15:01:02 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strchar(char *str, char c)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	if (c == '\0')
		return (str + i);
	return (0);
}

static char *ft_strjoin(char *s1, char *s2)
{
	int len1;
	int len2;
	char *res;
	char *ptr;
	
    if (!s1 && !s2)
		return NULL;
    if (!s1)
		s1 = "";
    if (!s2)
		s2 = "";
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
    res = malloc(len1 + len2 + 1);
    if (!res)
		return NULL;
    ptr = res;
    while (*s1)
        *ptr++ = *s1++;
    while (*s2)
        *ptr++ = *s2++;
    *ptr = '\0';
    return res;
}
static char	*ft_read_to_saved(int fd, char *saved)
{
	char	*buffer;
	char	*temp;
	int		bytes_read;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (free(saved), NULL);
	while (!ft_strchar(saved, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free(buffer), free(saved), NULL);
		if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(saved, buffer);
		if (!temp)
			return (free(buffer), free(saved), NULL);
		free(saved);
		saved = temp;
	}
	free(buffer);
	return (saved);
}

char	*get_next_line(int fd)
{
	static char	*saved;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (free(saved), NULL);
	saved = ft_read_to_saved(fd, saved);
	if (!saved)
		return (NULL);
	return (ft_lkmala(&saved));
}