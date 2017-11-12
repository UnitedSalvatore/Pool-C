/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 15:07:21 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/05 18:35:48 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(int argc, char **argv)
{
	int i;
	char **buff;

	if (argc == 2)
	{
		buff = ft_split_whitespaces(argv[1]);
		i = 0;
		while (buff[i] != '\0')
		{
			printf("%s\n", buff[i]);
			i++;
		}
	}
	return (0);
}
