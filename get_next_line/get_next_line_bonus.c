/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:33:11 by szaoual           #+#    #+#             */
/*   Updated: 2024/12/05 16:45:58 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line_bonus.h"

static char	*ft_strchr(char *str, char c)
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

static char *ft_read_to_str_left(int fd, char *str_left)
{
    char *buffer;
    int read_bytes;
    char *tmp;

    buffer = malloc(BUFFER_SIZE + 1);
    if (!buffer)
        return (free(str_left), NULL);
    while (!ft_strchr(str_left, '\n'))
    {
        read_bytes = read(fd, buffer, BUFFER_SIZE);
        if (read_bytes < 0)
            return (free(str_left), free(buffer), NULL);
        if (read_bytes == 0)
            break;
        buffer[read_bytes] = '\0';
        tmp = ft_strjoin(str_left, buffer);
        if (!tmp)
            return (free(str_left), free(buffer), NULL);
        free(str_left);
        str_left = tmp;
    }
    free(buffer);
    return (str_left);
}

char	*get_next_line(int fd)
{
	static char	*str_left[1024] = {0};

	if (fd < 0 || fd > 1024)
		return (NULL);
	if (BUFFER_SIZE <= 0)
		return (free(str_left[fd]), NULL);
	str_left[fd] = ft_read_to_str_left(fd, str_left[fd]);
	if (!str_left[fd])
		return (NULL);
	return (ft_extract_line(&str_left[fd]));
}