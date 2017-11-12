/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 13:58:32 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/09 17:54:32 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*pointer;

	if (*begin_list)
	{
		pointer = *begin_list;
		while (pointer->next)
			pointer = pointer->next;
		pointer->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
