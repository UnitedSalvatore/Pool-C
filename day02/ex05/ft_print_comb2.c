/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 16:56:30 by ypikul            #+#    #+#             */
/*   Updated: 2017/07/28 11:54:43 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_two(int a, int b)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
}

void	ft_print_coma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = 0;
	b = 1;
	while (a / 10 <= 9 && a % 10 <= 8)
	{
		while (b / 10 <= 9 && b % 10 <= 9)
		{
			ft_print_two(a, b);
			if (a / 10 != 9 || a % 10 != 8 || b / 10 != 9 || b % 10 != 9)
			{
				ft_print_coma();
			}
			b++;
		}
		if (++a % 10 == 9)
		{
			a++;
		}
		b = a + 1;
	}
}
