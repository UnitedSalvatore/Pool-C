/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 16:15:54 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/07 17:24:16 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_map(int *tab, int length, int (*f)(int));
void	ft_putnbr(int nb);

int		x10(int x)
{
	return(x * 10);
}

int		main(void)
{
	int buf[] = {3, 6, 99, 213};
	int length = 4;
	int i = 0;
	int *pointer = ft_map(buf, length, &x10);

	printf("Input data:");
	while (i < length)
		printf(" %i", buf[i++]);
	printf("\n");
	i = 0;
	printf("Otput data:");
	while (i < length)
		printf(" %i", pointer[i++]);
	printf("\n");
	return (0);
}
