/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:49:01 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/09 13:53:11 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int flag_a;
	int flag_b;

	flag_a = 1;
	flag_b = 1;
	i = -1;
	while (++i < length - 1)
		if (f(tab[i], tab[i + 1]) > 0)
			flag_a = 0;
	i = -1;
	while (++i < length - 1)
		if (f(tab[i], tab[i + 1]) < 0)
			flag_b = 0;
	return (flag_a || flag_b);
}
