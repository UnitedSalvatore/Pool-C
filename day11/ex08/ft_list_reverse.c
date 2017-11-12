/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 20:56:40 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/09 21:14:13 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *temp_1;
	t_list *temp_2;
	t_list *list;

	temp_1 = NULL;
	temp_2 = NULL;
	list = *begin_list;
	if (!list || !(list->next))
		return ;
	temp_1 = list->next;
	temp_2 = temp_1->next;
	list->next = NULL;
	temp_1->next = list;
	while (temp_2)
	{
		list = temp_1;
		temp_1 = temp_2;
		temp_2 = temp_2->next;
		temp_1->next = list;
	}
	*begin_list = temp_1;
}
