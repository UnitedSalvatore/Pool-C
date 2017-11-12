/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 17:39:07 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/03 17:44:29 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*buffer;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	buffer = (int*)malloc(sizeof(int) * (max - min));
	if (buffer == 0)
		return (0);
	while (min < max)
		buffer[i++] = min++;
	return (buffer);
}
