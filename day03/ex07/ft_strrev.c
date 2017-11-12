/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 21:02:51 by ypikul            #+#    #+#             */
/*   Updated: 2017/07/28 22:29:04 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		size;
	int		s;
	int		e;
	char	tmp;

	size = 0;
	while (str[size] != '\0')
		++size;
	s = 0;
	e = size - 1;
	while (s < e)
	{
		tmp = str[s];
		str[s++] = str[e];
		str[e--] = tmp;
	}
	return (str);
}
