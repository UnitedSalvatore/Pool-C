/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 20:55:31 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/13 21:23:48 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

char	*g_x;

void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		parse_factor(void);
int		parse_product(void);
int		parse_sum(void);
char	*delete_spaces(char *str);

#endif
