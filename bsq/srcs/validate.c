/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 21:31:06 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/16 21:31:09 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int		valid(char *map, t_params *prm)
{
	int i;

	i = 0;
	if (prm->rows != count_rows(map))
		return (0);
	prm->cols = count_cols(map, prm);
	while (map[i] != '\0')
	{
		if (i % prm->cols != prm->cols - 1 && \
				(map[i] == prm->empty || map[i] == prm->obst))
			i++;
		else if (i % prm->cols == prm->cols - 1 && \
				map[i] == '\n')
			i++;
		else
			return (0);
	}
	return (1);
}
