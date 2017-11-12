/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bp_find_bsq.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abodnar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 12:31:25 by abodnar           #+#    #+#             */
/*   Updated: 2017/08/16 20:21:39 by abodnar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int		min_int(int i1, int i2, int i3)
{
	int min;

	min = i1;
	if (i2 < min)
		min = i2;
	if (i3 < min)
		min = i3;
	return (min);
}

void	bp_find_bsq(int *big, t_params *prm)
{
	int i;
	int size;

	i = 0;
	size = (prm->cols + 1) * (prm->rows + 1);
	while (i < size)
	{
		if (i < prm->cols + 1 || (i % prm->cols + 1) == 0 || \
				big[i] == 0 || big[i] == -1)
			i++;
		else
		{
			big[i] = min_int(big[i - 1], big[i - prm->cols - 1],
				big[i - prm->cols - 2]) + 1;
			i++;
		}
	}
}
