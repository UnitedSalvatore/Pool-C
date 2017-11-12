/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_sum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 20:42:15 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/13 21:58:54 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		parse_sum(void)
{
	int		product;
	char	symbol;

	product = parse_product();
	while (*g_x == '+' || *g_x == '-')
	{
		symbol = *g_x;
		g_x++;
		if (symbol == '-')
			product -= parse_product();
		else
			product += parse_product();
	}
	return (product);
}
