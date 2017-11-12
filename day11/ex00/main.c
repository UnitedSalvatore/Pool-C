/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:36:17 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/09 16:56:24 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Input data: %s\n", argv[1]);
		t_list *pointer = ft_create_elem(argv[1]);
		printf("Output data: %s\n", pointer->data);
	}
	return (0);
}
