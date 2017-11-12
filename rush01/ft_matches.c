/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matches.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprivalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 19:04:16 by pprivalo          #+#    #+#             */
/*   Updated: 2017/08/06 14:40:03 by pprivalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sum_all(int **arr)
{
	int i;
	int j;
	int sum;

	i = 0;
	sum = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			sum += arr[i][j];
			j++;
		}
		i++;
	}
	return (sum);
}

int		**ft_arr_copy(int **arr1, int **arr2)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			arr1[i][j] = arr2[i][j];
			j++;
		}
		i++;
	}
	return (arr1);
}

int		ft_match_arr(int **arr1, int **arr2)
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (arr1[i][j] != arr2[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_is_solved(int **arr)
{
	if (ft_sum_all(arr) == 405)
		return (1);
	else
		return (0);
}
