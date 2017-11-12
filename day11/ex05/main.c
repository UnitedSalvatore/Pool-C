/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:36:17 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/10 14:39:34 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"


int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i;
		t_list *list = ft_list_push_params(argc, argv);
	
		i = 0;
		while (list->next)
		{
			printf("Output data: %s\n", list->data);
			list = list->next;
		}
			printf("%s\n", list->data);
	}
	return (0);
}
