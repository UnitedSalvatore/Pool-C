/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pick_out_one.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprivalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 21:40:26 by pprivalo          #+#    #+#             */
/*   Updated: 2017/08/05 22:45:27 by pprivalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		powr(int nbr, int power);

int		ft_pick_out_one(int nbr, int nbr2)
{
	if (nbr % powr(10, nbr2 - 1) == 0 && nbr / powr(10, nbr2) == 0)
		if (nbr > 9)
			nbr = nbr / powr(10, nbr2 - 1);
	return (nbr);
}

int		**ft_pick_from_all(int **arr)
{
	int i;
	int j;
	int z;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			z = 2;
			while (z < 10)
			{
				arr[i][j] = ft_pick_out_one(arr[i][j], z);
				z++;
			}
			j++;
		}
		i++;
	}
	return (arr);
}
