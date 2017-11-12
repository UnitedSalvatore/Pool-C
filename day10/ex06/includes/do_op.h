/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 15:58:41 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/08 18:11:48 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H

typedef struct	s_operators
{
	int		(*f)(int, int);
	char	*oper;
}				t_operators;

t_operators g_opp_table[] =
{
	{&ft_sub, "-"},
	{&ft_add, "+"},
	{&ft_mul, "*"},
	{&ft_div, "/"},
	{&ft_mod, "%"}
};

#endif
