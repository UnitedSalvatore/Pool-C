/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 15:58:18 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/16 22:34:30 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int		main(int ac, char **av)
{
	int		fd;
	int		i;
	char	*buf;

	if (ac == 1)
	{
		buf = read_file(0);
		bod_pik(buf);
		free(buf);
	}
	else
	{
		i = 0;
		while (++i < ac)
		{
			if ((fd = open(av[i], O_RDONLY)) == -1 && \
					ft_puterr("map error\n"))
				continue ;
			buf = read_file(fd);
			bod_pik(buf);
			free(buf);
		}
	}
	return (0);
}
