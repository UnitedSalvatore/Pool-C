/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_product.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 20:39:07 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/13 22:01:41 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		parse_product(void)
{
	char	operand;
	int		number;

	number = parse_factor();
	while (*g_x == '/' \
			|| *g_x == '%' \
			|| *g_x == '*')
	{
		operand = *g_x;
		g_x++;
		if (operand == '*')
			number *= parse_factor();
		else if (operand == '%')
			number %= parse_factor();
		else if (operand == '/')
			number /= parse_factor();
	}
	return (number);
}
