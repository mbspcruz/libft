/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cruz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:25:41 by mda-cruz          #+#    #+#             */
/*   Updated: 2021/02/17 18:28:22 by mda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>

size_t	ft_strlen(char *str);
int ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int ft_atoi(const char *str);

#endif