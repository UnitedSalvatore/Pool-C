/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprivalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 14:27:07 by pprivalo          #+#    #+#             */
/*   Updated: 2017/08/06 14:46:42 by pprivalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_errors_input(int argc, char **argv);
int		**ft_fill_array(char **argv);
void	ft_print_array(int **arr);
int		ft_is_solved(int **arr);
int		**ft_cross_out(int **arr);
int		**ft_pick_from_all(int **arr);

int		main(int argc, char **argv)
{
	int		**sol;

	if (ft_errors_input(argc, argv) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	sol = ft_fill_array(argv);
	while (!ft_is_solved(sol))
	{
		sol = ft_cross_out(sol);
		sol = ft_pick_from_all(sol);
	}
	ft_print_array(sol);
	return (0);
}
