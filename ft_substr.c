/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cruz <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 17:55:08 by mda-cruz          #+#    #+#             */
/*   Updated: 2021/03/13 08:55:40 by mda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;
	unsigned int	j;
	size_t			size;

	if (!s)
		return (0);
	size = ft_strlen(s);
	i = 0;
	j = 0;
	ptr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!ptr)
		return (0);
	if (size > len)
		size = len;
	while (s[i])
	{
		if (i >= start && j < len)
			ptr[j++] = s[i];
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}
