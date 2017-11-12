/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 01:54:45 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/04 04:10:41 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] == ' ' || s1[i] == '\t' || s1[i] == '\v')
		++i;
	while (s1[i] == s2[j] && s1[i] != '\0')
	{
		i++;
		j++;
	}
	return ((int)((unsigned char)s1[i] - (unsigned char)s2[j]));
}

int		check_alert(char *str)
{
	if (ft_strcmp(str, "president") == 0)
	{
		write(1, "Alert!!!\n", 9);
		return (1);
	}
	if (ft_strcmp(str, "attack") == 0)
	{
		write(1, "Alert!!!\n", 9);
		return (1);
	}
	if (ft_strcmp(str, "powers") == 0)
	{
		write(1, "Alert!!!\n", 9);
		return (1);
	}
	return (0);
}

void	lowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int k;
	int stop;

	stop = 0;
	i = 0;
	k = 1;
	if (argc > 1)
	{
		while (k < argc && stop == 0)
		{
			lowcase(argv[k]);
			stop = check_alert(argv[k]);
			++k;
		}
	}
	return (0);
}
