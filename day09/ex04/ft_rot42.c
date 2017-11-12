/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 21:56:09 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/03 22:34:42 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	rotate42(char c)
{
	if (c >= 65 && c <= 90)
	{
		c = (c - 65 + 16) % 26 + 65;
		return (c);
	}
	if (c >= 97 && c <= 122)
	{
		c = (c - 97 + 16) % 26 + 97;
		return (c);
	}
	return (c);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = rotate42(str[i]);
		++i;
	}
	return (str);
}
