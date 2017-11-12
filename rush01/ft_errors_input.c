/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprivalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 15:04:44 by pprivalo          #+#    #+#             */
/*   Updated: 2017/08/05 17:17:04 by pprivalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_errors_input(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if (argc != 10)
		return (0);
	while (i < 10)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '1' || argv[i][j] > '9')
				if (argv[i][j] != '.')
					return (0);
			j++;
		}
		if (j != 9)
			return (0);
		i++;
	}
	return (1);
}
