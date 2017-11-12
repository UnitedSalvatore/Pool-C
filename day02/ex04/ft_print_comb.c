/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_with_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 14:31:49 by ypikul            #+#    #+#             */
/*   Updated: 2017/07/28 11:48:37 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_put_comb(char a, char b, char c)
{
	if (a == 0 && b == 0 && c == 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_put_comb(a, b, c);
				if (!(a == '7' && b == '8' && c == '9'))
				{
					ft_put_comb(0, 0, 0);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
