/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 21:41:56 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/15 13:34:57 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*cut_line(char *map)
{
	while (*map != '\n')
		map++;
	map++;
	return (map);
}