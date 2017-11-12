/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 17:54:20 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/03 18:02:52 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_generic(void)
{
	char *str;

	str = "Tut tut ; Tut tut";
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}
