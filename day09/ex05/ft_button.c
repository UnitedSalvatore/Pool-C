/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 22:52:46 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/03 23:21:26 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		ft_button(int i, int j, int k)
{
	int temparray[3];
	int index;

	temparray[0] = i;
	temparray[1] = j;
	temparray[2] = k;
	index = 0;
	while (index < 2)
	{
		if (temparray[index] > temparray[index + 1])
		{
			ft_swap(&temparray[index], &temparray[index + 1]);
			index = 0;
		}
		else
			index++;
	}
	return (temparray[1]);
}
