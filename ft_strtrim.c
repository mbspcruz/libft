/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cruz <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 17:07:55 by mda-cruz          #+#    #+#             */
/*   Updated: 2021/03/11 09:16:14 by mda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t start;
	size_t end;
	
	if (!s1 || !set)
		return (0);
	i = 0;
	start = 0;
	end = ft_strlen(s1);
	ptr = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!ptr)
		return (0);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	while (start < end)
	{
		ptr[i] = s1[start];
		i++;
		start++;		
	}
	ptr[i] = 0;			
	return (ptr);
}
