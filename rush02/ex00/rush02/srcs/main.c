/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 16:26:42 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/13 13:36:27 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>
#include <stdio.h>

int		main(void)
{
	char	*buffer;
	int		column;
	int		rows;
	int		*rush_flags;

	buffer = read_stdin();
	column = count_column(buffer);
	rows = count_rows(buffer);
	rush_flags = rush_compare(buffer, column, rows);
	ft_print_result(rush_flags, column, rows);
	return (0);
}
