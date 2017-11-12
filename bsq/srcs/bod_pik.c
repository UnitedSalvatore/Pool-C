/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bod_pik.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abodnar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 12:01:23 by abodnar           #+#    #+#             */
/*   Updated: 2017/08/16 22:48:21 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

void	bp_fill_bsq(char *map, int *big, t_params *prm, int big_size)
{
	int i;
	int j;

	i = -1;
	j = 0;
	while (++i < big_size)
	{
		if (i < prm->cols || i % (prm->cols + 1) == 0)
			big[i] = 0;
		else if (i == prm->cols)
			big[i] = -1;
		else if (map[j] == prm->empty || map[j] == prm->obst || \
				map[j] == '\n')
		{
			if (map[j] == prm->empty)
				big[i] = 1;
			else if (map[j] == prm->obst)
				big[i] = 0;
			else
				big[i] = -1;
			j++;
		}
	}
}

void	bod_pik(char *map)
{
	int			big_size;
	int			*big_int_map;
	t_params	*prm;

	if (!(prm = take_params(map)) && ft_puterr("map error\n"))
		return ;
	prm->map = cut_line(map);
	if (!(prm->val = valid(prm->map, prm)) && ft_puterr("map error\n"))
		return ;
	big_size = (prm->cols + 1) * (prm->rows + 1);
	big_int_map = (int *)malloc(sizeof(int) * big_size);
	bp_fill_bsq(prm->map, big_int_map, prm, big_size);
	bp_find_bsq(big_int_map, prm);
	bp_max_and_pos(big_int_map, prm);
	free(big_int_map);
	best_print(prm->map, prm);
	free(prm);
}
