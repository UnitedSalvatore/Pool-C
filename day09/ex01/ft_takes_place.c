/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 18:34:08 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/03 19:29:05 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	int i;

	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	i = hour;
	if (hour >= 12)
		i = hour % 12;
	if (i == 0 && hour == 12)
		i = 12;
	if (hour == 0)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	else if (hour == 24)
		printf("12.00 P.M. AND 1.00 A.M.\n");
	else if (hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", i, i + 1);
	else if (hour < 24)
		printf("%d.00 P.M. AND %d.00 P.M.\n", i, i + 1);
}
