/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cross_out.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprivalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 21:14:37 by pprivalo          #+#    #+#             */
/*   Updated: 2017/08/06 15:02:26 by pprivalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		powr(int nbr, int power);

int		**ft_cross_out_coll(int **arr, int c, int nbr)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (arr[i][c] > 9)
		{
			if (nbr > 1)
			{
				if (arr[i][c] % powr(10, nbr) / powr(10, nbr - 1) != 0)
					arr[i][c] = arr[i][c] - nbr * powr(10, nbr - 1);
			}
			else if (arr[i][c] % 10 != 0)
				arr[i][c] = arr[i][c] - nbr;
		}
		i++;
	}
	return (arr);
}

int		**ft_cross_out_row(int **arr, int r, int nbr)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (arr[r][i] > 9)
		{
			if (nbr > 1)
			{
				if (arr[r][i] % powr(10, nbr) / powr(10, nbr - 1) != 0)
					arr[r][i] = arr[r][i] - nbr * powr(10, nbr - 1);
			}
			else if (arr[r][i] % 10 != 0)
				arr[r][i] = arr[r][i] - nbr;
		}
		i++;
	}
	return (arr);
}

int		ft_cross_nbr(int elem, int nbr)
{
	if (nbr > 1)
	{
		if (elem % powr(10, nbr) / powr(10, nbr - 1) != 0)
			elem = elem - nbr * powr(10, nbr - 1);
	}
	else if (elem % 10 != 0)
		elem = elem - nbr;
	return (elem);
}

int		**ft_cross_out_sec(int **arr, int y, int x, int nbr)
{
	int i;
	int j;
	int maxi;
	int maxj;

	i = y / 3 * 3;
	j = x / 3 * 3;
	maxi = i + 3;
	maxj = j + 3;
	while (i < maxi)
	{
		j = x / 3 * 3;
		while (j < maxj)
		{
			if (arr[i][j] > 9)
			{
				arr[i][j] = ft_cross_nbr(arr[i][j], nbr);
			}
			j++;
		}
		i++;
	}
	return (arr);
}

int		**ft_cross_out(int **arr)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (arr[i][j] <= 9)
			{
				arr = ft_cross_out_coll(arr, j, arr[i][j]);
				arr = ft_cross_out_row(arr, i, arr[i][j]);
				arr = ft_cross_out_sec(arr, i, j, arr[i][j]);
			}
			j++;
		}
		i++;
	}
	return (arr);
}
