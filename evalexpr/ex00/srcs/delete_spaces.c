/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_spaces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 21:16:35 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/13 21:33:18 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*delete_spaces(char *str)
{
	int		i;
	int		length;
	char	*function;

	i = -1;
	length = 0;
	while (str[++i] != '\0')
		if (str[i] != '\t' && str[i] != '\n' && str[i] != ' ' \
				&& str[i] != '\v' && str[i] != '\f' && str[i] != '\r')
			length++;
	function = (char *)malloc(sizeof(char) * (length + 1));
	i = -1;
	length = 0;
	while (str[++i] != '\0')
	{
		if (str[i] != '\t' && str[i] != '\n' && str[i] != ' ' \
				&& str[i] != '\v' && str[i] != '\f' && str[i] != '\r')
			function[length++] = str[i];
		function[length] = '\0';
	}
	return (function);
}
