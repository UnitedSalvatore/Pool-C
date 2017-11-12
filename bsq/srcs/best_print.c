/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abodnar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 10:38:25 by abodnar           #+#    #+#             */
/*   Updated: 2017/08/16 23:14:48 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

void	best_print(char *map, t_params *prm)
{
	int	i;
	int	size;

	i = 0;
	size = prm->cols * prm->rows;
	while (i < size)
	{
		if (i % prm->cols > prm->max_pos % prm->cols - prm->max &&
				i % prm->cols <= prm->max_pos % prm->cols &&
				i >= prm->max_pos - (prm->cols + 1) * (prm->max - 1) &&
				i <= prm->max_pos)
			write(1, &prm->full, 1);
		else
			write(1, &map[i], 1);
		i++;
	}
}
