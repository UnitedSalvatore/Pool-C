/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 17:24:42 by ypikul            #+#    #+#             */
/*   Updated: 2017/07/29 21:12:25 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_dfs(int *table, int deep)
{
	int i;
	int count;
	int j;

	if (deep == 8)
		return (1);
	i = -1;
	count = 0;
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
			count += ft_dfs(table, deep + 1);
		}
	}
	return (count);
}

int		ft_eight_queens_puzzle(void)
{
	int a[8];

	return (ft_dfs(a, 0));
}
