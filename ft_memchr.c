/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cruz <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:29:26 by mda-cruz          #+#    #+#             */
/*   Updated: 2021/03/04 00:23:00 by mda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*str1;
	size_t	i;

	str1 = (char *)str;
	i = 0;
	while (str1[i] != '\0' && i < n)
	{
		if (str1[i] == c)
			return (&str1[i]);
		i++;
	}
	if (c == 0)
		return (&str1[i]);
	return (0);
}
