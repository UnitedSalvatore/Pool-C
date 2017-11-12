/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:25:21 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/10 18:58:13 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUF_SIZE 4096

void	ft_display_file(char *file_name)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return ;
	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
		write(1, buf, ret);
	close(fd);
}
