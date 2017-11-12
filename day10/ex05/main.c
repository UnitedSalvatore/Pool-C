/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 16:15:54 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/07 19:29:11 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     ft_is_sort(int *tab, int length, int(*f)(int, int));
int		ft_atoi(char *str);

int		minus(int x, int y)
{
	return (x - y);
}

int		main(int argc, char **argv)
{
	int *pointer = (int *)malloc(sizeof(int) * argc - 1);
	int i = -1;
	if (argc > 1)
	{
		while (++i < argc -1)
			pointer[i] = ft_atoi(argv[i + 1]);
		printf("%i\n", ft_is_sort(pointer, argc - 1, minus));
	}
	return (0);
}
