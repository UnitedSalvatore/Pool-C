/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 16:15:54 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/07 16:49:43 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putnbr(int nb);

int		main(int argc, char **argv)
{
	int buf[] = {3, 6};

	ft_foreach(buf, 2, &ft_putnbr);
	return (0);
}
