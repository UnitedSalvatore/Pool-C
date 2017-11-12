/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 17:17:17 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/12 17:27:00 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_column(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

int		count_rows(char *str)
{
	int i;
	int rows;

	i = 0;
	rows = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			rows++;
		i++;
	}
	return (rows);
}
