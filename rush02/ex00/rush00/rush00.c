/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 11:18:11 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/12 14:21:07 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_printline(char edge_symbol, char middle_symbol, int length)
{
	int		counter;

	ft_putchar(edge_symbol);
	counter = 0;
	while (counter < (length - 2))
	{
		ft_putchar(middle_symbol);
		counter++;
	}
	if (length > 1)
		ft_putchar(edge_symbol);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		counter;

	if (x > 0 && y > 0)
	{
		ft_printline('o', '-', x);
		counter = 0;
		while (counter < (y - 2))
		{
			ft_printline('|', ' ', x);
			counter++;
		}
		if (y > 1)
			ft_printline('o', '-', x);
	}
}
