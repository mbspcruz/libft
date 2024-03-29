/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cruz <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:28:59 by mda-cruz          #+#    #+#             */
/*   Updated: 2021/03/14 17:38:59 by mda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *elem;

	elem = lst;
	if (lst)
	{
		while (1)
		{
			(*f)(elem->content);
			elem = elem->next;
			if (elem == 0)
				return ;
		}
	}
}
