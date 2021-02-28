/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cruz <mda-cruz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:35:07 by mda-cruz          #+#    #+#             */
/*   Updated: 2021/02/27 18:06:46 by mda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str2 = (unsigned char *)dest;
	str1 = (unsigned char *)src;
	while (n > 0)
	{
		str2[n - 1] = str1[n - 1];
		n--;
	}
	return (dest);
}
