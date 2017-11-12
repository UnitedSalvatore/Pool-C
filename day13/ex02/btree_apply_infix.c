/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 20:59:27 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/11 21:34:12 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root == 0)
		return ;
	if (root->left)
		btree_apply_infix(root->left, applyf);
	if (root->item)
		applyf(root->item);
	if (root->right)
		btree_apply_infix(root->right, applyf);
}
