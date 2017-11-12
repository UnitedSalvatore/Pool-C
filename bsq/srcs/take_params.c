/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_params.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 21:41:44 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/16 21:53:52 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

t_params	*params_init(void)
{
	t_params *prm;

	prm = (t_params *)malloc(sizeof(t_params));
	prm->map = 0;
	prm->val = 0;
	prm->cols = 0;
	prm->rows = 0;
	prm->empty = '\0';
	prm->obst = '\0';
	prm->full = '\0';
	prm->max = 0;
	prm->max_pos = 0;
	return (prm);
}

int			ft_atoi(char *str, int length)
{
	int n;
	int i;

	n = 0;
	i = -1;
	while (++i < length)
	{
		if (str[i] > '9' || str[i] < '0')
			return (0);
		n = n * 10 + (str[i] - '0');
	}
	return (n);
}

t_params	*take_params(char *map)
{
	t_params	*prm;
	int			i;

	i = 0;
	while (map[i] != '\n' && map[i] != '\0')
		i++;
	if (i < 4)
		return (0);
	prm = params_init();
	if (map[i - 3] != '\0' && map[i - 2] != '\0' && \
			map[i - 1] != '\0' && map[i] == '\n')
	{
		prm->empty = map[i - 3];
		prm->obst = map[i - 2];
		prm->full = map[i - 1];
	}
	prm->rows = ft_atoi(map, i - 3);
	if (prm->empty == prm->obst || prm->rows == 0 || prm->empty == '\0' \
			|| prm->obst == '\0' || prm->full == '\0' || \
			!(map[i + 1] == prm->obst || map[i + 1] == prm->empty))
		return (0);
	return (prm);
}
