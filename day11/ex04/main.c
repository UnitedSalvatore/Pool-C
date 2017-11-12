/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:36:17 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/09 18:28:44 by ypikul           ###   ########.fr       */
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
			ft_list_push_back(&list, argv[i]);
		}
		printf("Output counter: %s\n", ft_list_last(list)->data);
	}
	return (0);
}
