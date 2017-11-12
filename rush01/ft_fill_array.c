/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprivalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 15:37:04 by pprivalo          #+#    #+#             */
/*   Updated: 2017/08/05 21:13:11 by pprivalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		g_i;

int		**ft_fill_array(char **argv)
{
	int		j;
	int		**ret;

	g_i = 0;
	ret = (int **)malloc(sizeof(int *) * 9);
	while (g_i < 9)
	{
		ret[g_i] = (int *)malloc(sizeof(int) * 9);
		g_i++;
	}
	g_i = 1;
	while (argv[g_i])
	{
		j = 0;
		while (argv[g_i][j])
		{
			if (argv[g_i][j] >= '1' && argv[g_i][j] <= '9')
				ret[g_i - 1][j] = argv[g_i][j] - '0';
			else
				ret[g_i - 1][j] = 987654321;
			j++;
		}
		g_i++;
	}
	return (ret);
}
