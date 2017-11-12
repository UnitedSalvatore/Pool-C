/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 06:45:09 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/04 06:45:13 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_door.h"

void		ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		++str;
	}
}

void		open_door(t_door *door)
{
	ft_putstr("Door opening...\n");
	door->state = OPEN;
}

void		close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSE;
}

t_state		is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	return (door->state);
}

t_state		is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n");
	return (door->state);
}
