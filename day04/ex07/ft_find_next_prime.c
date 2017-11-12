/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 17:24:02 by ypikul            #+#    #+#             */
/*   Updated: 2017/07/29 21:04:33 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (1);
	else if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int			ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		++nb;
	return (nb);
}
