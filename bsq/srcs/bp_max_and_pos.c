/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bp_max_and_pos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abodnar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 13:02:08 by abodnar           #+#    #+#             */
/*   Updated: 2017/08/16 20:53:56 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

void	bp_max_and_pos(int *big_int_map, t_params *prm)
{
	int i;
	int size;
	int t_max_pos;
	int line;

	size = (prm->cols + 1) * (prm->rows + 1);
	i = 0;
	while (i < size)
	{
		if (big_int_map[i] > prm->max)
		{
			prm->max = big_int_map[i];
			t_max_pos = i;
		}
		i++;
	}
	line = 1;
	i = 0;
	while (i < t_max_pos)
	{
		if (big_int_map[i] == -1)
			line++;
		i++;
	}
	prm->max_pos = t_max_pos - prm->cols - line;
}
