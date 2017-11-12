/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 20:36:03 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/11 12:13:05 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void	ft_read_stdin(void)
{
	char buf;

	while (read(0, &buf, 1) != 0)
		;
}

int		main(int argc, char **argv)
{
	int i;
	int size;

	if (argc == 1 || argc == 3)
		ft_read_stdin();
	if (argc < 4)
		return (0);
	i = 4;
	while (i < argc)
	{
		size = get_file_size(argv[i] - ft_atoi(argv[2]));

	}
}
