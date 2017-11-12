/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 21:25:21 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/10 21:28:24 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int		get_file_size(char *file)
{
	int		fd;
	char	buffer;
	int		size;

	size = 0;
	fd = open(file, O_RDONLY);
	while (read(fd, &buffer, 1))
		size++;
	close(fd2);
	return (size);
}
