/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 16:18:48 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/16 23:13:42 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define BSIZE 8193

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_params
{
	char		*map;
	int			val;
	int			cols;
	int			rows;
	char		empty;
	char		obst;
	char		full;
	int			max;
	int			max_pos;
}				t_params;

t_params		*take_params(char *map);
char			*read_file(int fd);
char			*cut_line(char *map);
int				valid(char *map, t_params *prm);
void			ft_putstr(char *str);
int				count_rows(char *str);
int				count_cols(char *str, t_params *prm);
int				ft_puterr(char *str);

void			best_print(char *map, t_params *params);
void			bod_pik(char *map);
void			bp_find_bsq(int *big_int_map, t_params *prm);
void			bp_max_and_pos(int *big_int_map, t_params *prm);

#endif
