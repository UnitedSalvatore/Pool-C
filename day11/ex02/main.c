/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:36:17 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/09 17:47:51 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"


int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		t_list *list = ft_create_elem(argv[1]);

		int i = 1;
	
		while (++i < argc)
		{
			ft_list_push_front(&list, argv[i]);
		}

		while (list->next)
		{
			printf("Output data: %s\n", list->data);
			list = list->next;
		}
			printf("Output data: %s\n", list->data);
	}
	return (0);
}
