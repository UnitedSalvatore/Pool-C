/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 15:28:49 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/12 14:21:25 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_printline(char start_s, char middle_s, char end_s, int length)
{
	int		counter;

	ft_putchar(start_s);
	counter = 0;
	while (counter < (length - 2))
	{
		ft_putchar(middle_s);
		counter++;
	}
	if (length > 1)
		ft_putchar(end_s);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		counter;

	if (x > 0 && y > 0)
	{
		ft_printline('/', '*', '\\', x);
		counter = 0;
		while (counter < (y - 2))
		{
			ft_printline('*', ' ', '*', x);
			counter++;
		}
		if (y > 1)
			ft_printline('\\', '*', '/', x);
	}
}
