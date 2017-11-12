/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:36:17 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/11 19:59:33 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_btree.h"

int		main(int argc, char **argv)
{
	t_btree *pointer;

	if (argc == 2)
	{
		printf("Input data: %s\n", argv[1]);
		pointer = btree_create_node(argv[1]);
		printf("Output data: %s\n", pointer->item);
	}
	return (0);
}
