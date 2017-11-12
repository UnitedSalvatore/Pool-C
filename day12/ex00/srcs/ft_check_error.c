/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:15:30 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/10 16:36:18 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_error(int ac)
{
	if (ac == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (ac > 2)
	{
		write(2, "Too many arguments\n", 20);
		return (1);
	}
	return (0);
}
