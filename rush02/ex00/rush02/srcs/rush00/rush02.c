/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 11:18:11 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/13 15:40:48 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>
#include <stdlib.h>

char	*rush02(int x, int y)
{
	int		counter;
	char	*rush;

	rush = (char *)malloc(sizeof(char) * (x + 1) * y + 1);
	rush[0] = '\0';
	if (x > 0 && y > 0)
	{
		ft_addline("ABA", x, rush);
		counter = 0;
		while (counter < (y - 2))
		{
			ft_addline("B B", x, rush);
			counter++;
		}
		if (y > 1)
			ft_addline("CBC", x, rush);
	}
	return (rush);
}
