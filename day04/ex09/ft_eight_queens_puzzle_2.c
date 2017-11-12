/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 17:25:15 by ypikul            #+#    #+#             */
/*   Updated: 2017/07/29 21:14:44 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_sequence(int *table)
{
	int i;

	i = 0;
	while (i < 8)
		ft_putchar(table[i++] + '1');
	ft_putchar('\n');
}

void	ft_dfs(int *table, int deep)
{
	int i;
	int j;

	if (deep == 8)
		ft_print_sequence(table);
	i = -1;
	while (++i < 8)
	{
		j = 0;
		while (j < deep)
		{
			if (table[j] == i || table[j] + deep - j == i
				|| table[j] - deep + j == i)
				j = 100;
			j++;
		}
		if (j == deep)
		{
			table[deep] = i;
			ft_dfs(table, deep + 1);
		}
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int a[8];

	return (ft_dfs(a, 0));
}
