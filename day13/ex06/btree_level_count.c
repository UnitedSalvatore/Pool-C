/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 23:26:18 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/11 23:26:38 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	if (root == 0)
		return (0);
	if ((*root).right == 0 && (*root).right == 0)
		return (1);
	return (1 + (btree_level_count((*root).left) >
	btree_level_count((*root).right) ? btree_level_count((*root).left) :
	btree_level_count((*root).right)));
}
