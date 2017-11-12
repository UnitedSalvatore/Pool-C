/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 15:07:21 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/08 22:20:29 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *));
char	**ft_split_whitespaces(char *str);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
}

int		main(int argc, char **argv)
{
	int i;
	char **buff;

	if (argc == 2)
	{
		buff = ft_split_whitespaces(argv[1]);
		ft_advanced_sort_wordtab(buff, &ft_strcmp);
		i = 0;
		while (buff[i] != '\0')
		{
			printf("%s\n", buff[i]);
			i++;
		}
	}
	return (0);
}
