/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cruz <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:05:05 by mda-cruz          #+#    #+#             */
/*   Updated: 2021/03/12 18:40:44 by mda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *ptr;

	ptr = (char *)malloc((sizeof(char)) * 2);
	if (!ptr)
		return (0);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		ptr[0] = '-';
		ptr[1] = '\0';
		ptr = ft_strjoin(ptr, ft_itoa(-n));
	}
	else if (n >= 10)
		ptr = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else
	{
		ptr[0] = (n + '0');
		ptr[1] = '\0';
	}
	return (ptr);
}
