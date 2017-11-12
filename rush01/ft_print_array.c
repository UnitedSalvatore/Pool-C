/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprivalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 16:57:21 by pprivalo          #+#    #+#             */
/*   Updated: 2017/08/06 01:23:23 by pprivalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_int_to_char(int a)
{
	char	*s;

	s = (char *)malloc(sizeof(char));
	s[0] = a + '0';
	return (s);
}

void	ft_print_array(int **arr)
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (arr[i][j] <= 9 && arr[i][j] > 0)
				write(1, ft_int_to_char(arr[i][j]), 1);
			else
				write(1, "0", 1);
			if (j != 8)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			j++;
		}
		i++;
	}
}
