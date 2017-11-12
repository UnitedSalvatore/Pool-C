/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 21:02:51 by ypikul            #+#    #+#             */
/*   Updated: 2017/07/29 12:22:30 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

char	*ft_strrev(char *str)
{
	int		size;
	int		s;
	int		e;
	char	tmp;

	size = 0;
	while (str[size] != '\0')
		++size;
	s = 0;
	e = size - 1;
	while (s < e)
	{
		tmp = str[s];
		str[s++] = str[e];
		str[e--] = tmp;
	}
	ft_putstr(str);
	return (str);
}

int main(void)
{
	char test[]="Hello Pidr";
	ft_strrev(test);
}
