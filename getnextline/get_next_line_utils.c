/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:01:56 by szaoual           #+#    #+#             */
/*   Updated: 2024/12/03 15:01:56 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i])
		i++;
	return (i);
}

static char	*ft_strlcpy(char *dest, char *src, int len)
{
	int	i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	while (src[i] && i < len - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	*ft_strdup(char *str)
{
	int		i;
	char	*res;

	i = 0;
	if (!str)
		return (NULL);
	res = malloc(ft_strlen(str) + 1);
	if (!res)
		return (NULL);
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

static void	ft_lkmala_lkmala(char **str, int i)
{
	char	*temp;

	temp = NULL;
	if ((*str)[i])
	{
		temp = ft_strdup(&((*str)[i]));
		if (!temp)
		{
			free(*str);
			*str = NULL;
			return ;
		}
		free(*str);
		*str = temp;
	}
	else
	{
		free(*str);
		*str = NULL;
	}
}

char	*ft_lkmala(char **str)
{
	int		i;
	char	*line;

	i = 0;
	if (!*str)
		return (NULL);
	while ((*str)[i] && (*str)[i] != '\n')
		i++;
	if ((*str)[i] == '\n')
		i++;
	line = malloc(i + 1);
	if (!line)
	{
		free(*str);
		*str = NULL;
		return (NULL);
	}
	ft_strlcpy(line, *str, i + 1);
	ft_lkmala_lkmala(&(*str), i);
	return (line);
}