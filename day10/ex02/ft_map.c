/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 16:56:56 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/07 17:11:36 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *buffer;

	buffer = (int *)malloc((sizeof(int) * length));
	i = -1;
	while (++i < length)
		buffer[i] = f(tab[i]);
	return (buffer);
}
