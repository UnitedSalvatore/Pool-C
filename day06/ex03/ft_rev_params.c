/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 18:21:39 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/02 18:32:03 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = argc - 1;
	j = 0;
	while (i > 0)
	{
		while (argv[i][j])
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
		j = 0;
		i--;
	}
	return (0);
}
