/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 15:24:30 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/03 17:22:52 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *buffer;

	i = 0;
	if (min >= max)
		return (0);
	buffer = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
		buffer[i++] = min++;
	buffer[i] = '\0';
	return (buffer);
}
