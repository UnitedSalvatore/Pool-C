/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 20:33:13 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/11 11:51:53 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

void	ft_read_stdin(void)
{
	char buf;

	while (read(0, &buf, 1) != 0)
		write(1, &buf, 1);
}

void	ft_putstr_stderr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(2, &str[i++], 1);
}

int		ft_check_errno(int error, char *file_name)
{
	if (error == 2)
	{
		ft_putstr_stderr("cat: ");
		ft_putstr_stderr(file_name);
		ft_putstr_stderr(": No such file or directory\n");
		return (2);
	}
	if (error == 13)
	{
		ft_putstr_stderr("cat: ");
		ft_putstr_stderr(file_name);
		ft_putstr_stderr(": Permission denied\n");
		return (13);
	}
	if (error == 21)
	{
		ft_putstr_stderr("cat: ");
		ft_putstr_stderr(file_name);
		ft_putstr_stderr(": Is a directory\n");
		return (21);
	}
	return (0);
}

void	ft_display_file(char *file_name)
{
	char	buf;
	int		fd;

	fd = open(file_name, O_RDONLY);
	if (ft_check_errno(errno, file_name))
		;
	else if (read(fd, &buf, 0) == -1)
		ft_check_errno(errno, file_name);
	else
	{
		while (read(fd, &buf, 1) > 0)
			write(1, &buf, 1);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc == 1)
		ft_read_stdin();
	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-' && argv [i][1] == '\0')
			ft_read_stdin();
		ft_display_file(argv[i]);
		i++;
	}
}
