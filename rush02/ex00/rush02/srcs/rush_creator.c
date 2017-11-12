/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_creator.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 18:34:35 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/12 21:04:38 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

char	**rush_creator(int x, int y)
{
	int		i;
	char	**rush_keeper;

	i = 0;
	rush_keeper = (char **)malloc(sizeof(char *) * 5);
	rush_keeper[0] = rush00(x, y);
	rush_keeper[1] = rush01(x, y);
	rush_keeper[2] = rush02(x, y);
	rush_keeper[3] = rush03(x, y);
	rush_keeper[4] = rush04(x, y);
	return (rush_keeper);
}
