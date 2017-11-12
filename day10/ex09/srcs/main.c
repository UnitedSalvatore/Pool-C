/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 13:47:37 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/08 18:04:09 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>
#include <do_op.h>

int		ft_zero_check(int y, char *operator)
{
	if (y == 0)
	{
		if (ft_strcmp(operator, "/") == 0)
		{
			ft_putstr("Stop : division by zero\n");
			return (1);
		}
		else if (ft_strcmp(operator, "%") == 0)
		{
			ft_putstr("Stop : modulo by zero\n");
			return (1);
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int result;

	if (argc != 4)
		return (0);
	if (ft_zero_check(ft_atoi(argv[3]), argv[2]) == 1)
		return (0);
	i = 0;
	result = 0;
	while (i < 5)
	{
		if (ft_strcmp(g_opp_table[i].oper, argv[2]) == 0)
			result = g_opp_table[i].f(ft_atoi(argv[1]), ft_atoi(argv[3]));
		i++;
	}
	ft_putnbr(result);
	ft_putchar('\n');
	return (0);
}
