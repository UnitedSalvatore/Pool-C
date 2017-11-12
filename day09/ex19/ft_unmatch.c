/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 13:25:16 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/04 15:04:26 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int k;

	j = 0;
	while (j < length)
	{
		i = 0;
		k = 0;
		while (i < length)
		{
			if (i != j)
				if (tab[i] == tab[j])
				{
					k = 1;
					break ;
				}
			i++;
		}
		if (!k)
			return (tab[j]);
		j++;
	}
	return (tab[j]);
}
