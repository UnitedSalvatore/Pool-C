/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:05:37 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/10 16:42:10 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int		main(int argc, char **argv)
{
	if (ft_check_error(argc) == 0)
		ft_display_file(argv[1]);
	return (0);
}
