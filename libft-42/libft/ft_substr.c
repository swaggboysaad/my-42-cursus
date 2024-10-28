/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:39:00 by tchevrie          #+#    #+#             */
/*   Updated: 2024/10/27 18:21:52 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len) {
	if(!s)
		return NULL;
	size_t str_len = ft_strlen(s);
	if(start >= str_len)
		return ft_strdup("");
	if(len > str_len - start)
	{
		len = str_len - start;
	}
	char *substr = malloc(len + 1);
	ft_strlcpy(substr,s + start ,len + 1);
	
	return substr;
}