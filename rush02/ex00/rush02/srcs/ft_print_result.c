/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_result.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 12:46:50 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/16 17:29:46 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ft.h>

void	print_match(int i, int x, int y)
{
	ft_putstr("[rush-0");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

void	ft_print_result(int *rush_flags, int x, int y)
{
	int i;
	int match;

	i = 0;
	match = 0;
	while (i < 5 && x > 0 && y > 0)
	{
		if (match == 0 && rush_flags[i] == 1)
		{
			match = 1;
			print_match(i, x, y);
		}
		else if (match == 1 && rush_flags[i] == 1)
		{
			ft_putstr(" || ");
			print_match(i, x, y);
		}
		i++;
	}
	if (!match)
		ft_putstr("aucune");
	ft_putstr("\n");
}
