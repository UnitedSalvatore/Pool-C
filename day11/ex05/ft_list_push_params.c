/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 18:38:37 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/09 20:49:54 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*temp;
	t_list	*list;

	i = 1;
	list = 0;
	while (i < ac)
	{
		temp = ft_create_elem(av[i]);
		temp->next = list;
		list = temp;
		++i;
	}
	return (list);
}
