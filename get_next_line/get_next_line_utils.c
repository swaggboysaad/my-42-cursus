/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:11:16 by szaoual           #+#    #+#             */
/*   Updated: 2024/12/02 11:35:36 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *left_str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!left_str)
	{
		left_str = (char *)malloc(1 * sizeof(char));
		left_str[0] = '\0';
	}
	if (!left_str || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(left_str) + ft_strlen(buff)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (left_str)
		while (left_str[++i] != '\0')
			str[i] = left_str[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(left_str) + ft_strlen(buff)] = '\0';
	free(left_str);
	return (str);
}

char	*ft_get_line(char *str_left)
{
	int		i;
	char	*str;

	i = 0;
	if (!str_left[i])
		return (NULL);
	while (str_left[i] && str_left[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (str_left[i] && str_left[i] != '\n')
	{
		str[i] = str_left[i];
		i++;
	}
	if (str_left[i] == '\n')
	{
		str[i] = str_left[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_new_str_left(char *str_left)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (str_left[i] && str_left[i] != '\n')
		i++;
	if (!str_left[i])
	{
		free(str_left);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(str_left) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (str_left[i])
		str[j++] = str_left[i++];
	str[j] = '\0';
	free(str_left);
	return (str);
}