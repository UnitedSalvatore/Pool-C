/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:36:17 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/10 14:27:04 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"
#include <stdlib.h>


int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		t_list *list = ft_list_push_params(argc, argv);
		ft_list_reverse(&list);
		while (list->next)
		{
			printf("Output data: %s\n", list->data);
			list = list->next;
		}
		printf("Output data: %s\n", list->data);
	}
	return (0);
}
