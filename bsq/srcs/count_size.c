/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 17:17:17 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/16 23:16:28 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_puterr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(2, &str[i], 1);
		i++;
	}
	return (1);
}

int		count_cols(char *str, t_params *params)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i = i / params->rows;
	return (i);
}

int		count_rows(char *str)
{
	int i;
	int rows;

	i = 0;
	rows = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			rows++;
		i++;
	}
	return (rows);
}
