/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 21:16:56 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/10 21:44:26 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void	ft_display_file(int size, char *file_name)
{
	char	buf;
	int		fd;
	int		ret;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_stderr("ft_tail: ");
		ft_putstr_stderr(file_name);
		ft_putstr_stderr(": No such file or directory\n");
	}
	else
	{
		while (size-- >= 0)
		   ret	= read(fd, &buf, 1);
		while (read(fd, &buf, 1) > 0)
			write(1, &buf, 1);
	}
	close(fd);
}
