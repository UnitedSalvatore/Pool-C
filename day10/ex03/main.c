/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 16:15:54 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/07 18:09:42 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_any(char **tab, int (*f)(char*));
int		ft_atoi(char *str);

int		main(int argc, char **argv)
{
	if (argc > 1)
		printf("%i\n", ft_any(argv, ft_atoi));
	return (0);
}
