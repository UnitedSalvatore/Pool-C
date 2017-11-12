/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 00:52:26 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/04 01:20:09 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (1);
	if ((base % 2) == 0)
		return (ft_collatz_conjecture(base / 2) + 1);
	else
		return (ft_collatz_conjecture(3 * base + 1) + 1);
	return (0);
}
