/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 13:00:19 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/03 16:47:39 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*buffer;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	buffer = (char *)malloc(sizeof(char) * (j + 1));
	if (buffer == 0)
		return (0);
	while (i < j)
	{
		buffer[i] = src[i];
		i++;
	}
	buffer[j] = '\0';
	return (buffer);
}
