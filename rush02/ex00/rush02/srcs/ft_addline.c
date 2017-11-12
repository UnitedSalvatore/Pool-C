/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 18:57:57 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/13 16:42:11 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_addline(char *symbols, int length, char *str)
{
	int i;
	int	counter;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
		i++;
	str[i++] = symbols[0];
	while (counter < (length - 2))
	{
		str[i++] = symbols[1];
		counter++;
	}
	if (length > 1)
		str[i++] = symbols[2];
	str[i++] = '\n';
	str[i] = '\0';
}
