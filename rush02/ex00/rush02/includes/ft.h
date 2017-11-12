/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 16:42:38 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/13 17:21:31 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define BSIZE 128

char	*read_stdin(void);
int		count_column(char *str);
int		count_rows(char *str);
int		*rush_compare(char *str, int x, int y);
char	**rush_creator(int x, int y);
char	*rush00(int x, int y);
char	*rush01(int x, int y);
char	*rush02(int x, int y);
char	*rush03(int x, int y);
char	*rush04(int x, int y);
void	ft_addline(char *symbols, int length, char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_print_result(int *rush_flags, int x, int y);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

#endif
