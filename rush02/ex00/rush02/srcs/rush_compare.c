/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_compare.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 17:43:13 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/13 17:14:03 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>
#include <stdlib.h>

int		*rush_compare(char *str, int x, int y)
{
	int		*rush_flags;
	char	**rush_keeper;
	int		i;

	rush_flags = (int *)malloc(sizeof(int) * 5);
	i = -1;
	while (++i < 5)
		rush_flags[i] = 0;
	rush_keeper = rush_creator(x, y);
	i = -1;
	while (++i < 5)
	{
		if (ft_strcmp(str, rush_keeper[i]) == 0)
			rush_flags[i] = 1;
	}
	return (rush_flags);
}
