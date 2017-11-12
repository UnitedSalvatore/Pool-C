/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 18:19:27 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/09 18:24:50 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *pointer;

	pointer = begin_list;
	if (pointer == 0)
		return (0);
	while (pointer->next)
		pointer = pointer->next;
	return (pointer);
}
