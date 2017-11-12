/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:36:17 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/09 20:19:55 by ypikul           ###   ########.fr       */
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
		list = ft_list_at(list, atoi(argv[1]));
		printf("Output data: %s\n", list->data);
	}
	return (0);
}
