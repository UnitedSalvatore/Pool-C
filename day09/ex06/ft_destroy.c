/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 23:44:34 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/04 00:21:38 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (factory)
	{
		while (factory[i])
		{
			while (factory[i][j])
			{
				free(factory[i][j++]);
			}
			free(factory[i++]);
		}
		free(factory);
	}
}
