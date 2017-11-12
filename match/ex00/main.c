/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 13:11:52 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/06 15:17:22 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("Input *s1: %s\n", argv[1]);
		printf("Input *s2: %s\n", argv[2]);
		printf("Output data: %i\n", match(argv[1], argv[2]));
	}
	return (0);
}
