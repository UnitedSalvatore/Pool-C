/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 16:56:19 by ypikul            #+#    #+#             */
/*   Updated: 2017/07/28 11:57:43 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int n)
{
	int limit;

	limit = 1;
	if (n < 0)
	{
		ft_putchar('-');
		n = -1 * n;
	}
	while (n / limit > 9)
	{
		limit *= 10;
	}
	while (limit != 0)
	{
		ft_putchar('0' + n / limit);
		n = n % limit;
		limit = limit / 10;
	}
}
