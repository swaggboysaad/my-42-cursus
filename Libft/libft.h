/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:05:47 by szaoual           #+#    #+#             */
/*   Updated: 2024/10/23 15:05:47 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
int isalpha(int x);
int isdigit(int x);
int isalnum(int x);
int ft_isascii(int x);
int ft_isprint(int c);
size_t ft_strlen(const char *str);
#endif