/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 20:36:52 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/13 21:00:54 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putnbr(int nb)
{
	long int temp_int;

	temp_int = nb;
	if (temp_int < 0)
	{
		ft_putchar('-');
		temp_int = -1 * temp_int;
	}
	if (temp_int / 10 > 0)
		ft_putnbr(temp_int / 10);
	ft_putchar(temp_int % 10 + 48);
}
