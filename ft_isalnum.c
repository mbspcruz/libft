/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cruz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 17:22:15 by mda-cruz          #+#    #+#             */
/*   Updated: 2021/02/14 17:30:27 by mda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int argument)
{
	if ((argument >= '0' && argument <= '9') || (argument >= 'a' &&
	argument <= 'z') || (argument >= 'A' && argument <= 'Z'))
		return (1);
	else
		return (0);
}
