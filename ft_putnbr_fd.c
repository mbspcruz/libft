/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cruz <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 18:12:06 by mda-cruz          #+#    #+#             */
/*   Updated: 2021/03/09 21:04:05 by mda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int nr;

	nr = n;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2", fd);
		ft_putnbr_fd(147483648, fd);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nr = -nr;
	}
	if (nr / 10)
		ft_putnbr_fd(nr / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}
