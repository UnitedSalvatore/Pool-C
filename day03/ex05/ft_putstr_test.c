/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 20:12:39 by ypikul            #+#    #+#             */
/*   Updated: 2017/07/29 12:10:24 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		(*str)++;
		ft_putchar(*str);
		str++;
	}
}

int		main(void)
{
	char	test_str[10] = "TestWord";
	int		c = 5;

	c = (++c) + (++c);
	printf("%d\n", c);
	ft_putstr(test_str);
}
