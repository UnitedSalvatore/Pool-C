/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 16:52:35 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/13 15:36:00 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"
#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strconcat(char *dst, char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (str[j])
		dst[i++] = str[j++];
	dst[i] = '\0';
}

char	*ft_bufconcat(int readed, char *previous, char *new)
{
	char	*buffer_stdin;
	int		previous_size;

	previous_size = ft_strlen(previous);
	buffer_stdin = (char *)malloc(sizeof(char) * (previous_size + readed + 1));
	ft_strconcat(buffer_stdin, previous);
	ft_strconcat(buffer_stdin, new);
	return (buffer_stdin);
}

char	*read_stdin(void)
{
	char	*buffer_stdin;
	char	buf[BSIZE + 1];
	int		readed;

	buffer_stdin = (char *)malloc(sizeof(char) * (BSIZE + 1));
	while ((readed = read(0, buf, BSIZE)) > 0)
	{
		buf[readed] = '\0';
		buffer_stdin = ft_bufconcat(readed, buffer_stdin, buf);
	}
	return (buffer_stdin);
}
