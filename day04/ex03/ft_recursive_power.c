/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 17:22:28 by ypikul            #+#    #+#             */
/*   Updated: 2017/07/29 22:58:36 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_recursive_power(int nb, int power)
{
	if (power < 0 || power >= 13)
		return (0);
	else if (power == 1)
		return (nb);
	else if (power == 0)
		return (1);
	else
	{
		return (nb * ft_recursive_power(nb, --power));
	}
}
