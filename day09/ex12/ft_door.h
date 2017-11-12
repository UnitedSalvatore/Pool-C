/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 06:45:26 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/04 06:45:31 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

typedef enum	e_state
{
	OPEN = 0,
	CLOSE
}				t_state;

typedef struct	s_door
{
	t_state		state;
}				t_door;

void			ft_putstr(char *str);

void			open_door(t_door *door);

void			close_door(t_door *door);

t_state			is_door_open(t_door *door);

t_state			is_door_close(t_door *door);

#endif
