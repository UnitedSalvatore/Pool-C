/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 16:18:13 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/16 21:17:30 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

char	*expand_buf(char *buf_file, unsigned int *buf_size)
{
	char			*new_buf;
	unsigned int	i;

	new_buf = malloc(sizeof(char) * (*buf_size) * 2);
	i = 0;
	while (i < *buf_size)
	{
		new_buf[i] = buf_file[i];
		i++;
	}
	*buf_size *= 2;
	free(buf_file);
	return (new_buf);
}

char	*read_file(int fd)
{
	char			*buf_file;
	unsigned int	length;
	unsigned int	buf_size;
	int				readed;

	buf_size = BSIZE;
	buf_file = malloc(sizeof(char) * buf_size);
	length = 0;
	while ((readed = read(fd, buf_file + length, buf_size - length)))
	{
		length += readed;
		if (length == buf_size)
			buf_file = expand_buf(buf_file, &buf_size);
	}
	buf_file[length] = '\0';
	return (buf_file);
}
