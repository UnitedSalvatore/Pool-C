/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 22:26:19 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/11 22:29:00 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, \
		int (*cmpf)(void *, void *))
{
	t_btree *temp;

	temp = 0;
	if (root)
	{
		temp = btree_search_item(root->left, data_ref, cmpf);
		if (temp == 0 && !(cmpf(root->item, data_ref)))
			temp = root->item;
		if (temp == 0)
			temp = btree_search_item(root->right, data_ref, cmpf);
	}
	return (temp);
}
