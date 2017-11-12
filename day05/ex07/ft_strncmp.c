/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 18:08:02 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/01 20:53:03 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n < 1)
		return (0);
	while ((s1[i] == s2[i]) && s1[i] != '\0' && s2[i] != '\0' && i < n)
		i++;
	if (i == n)
	{
		return (*(s1 - 1) - *(s2 - 1));
	}
	return ((int)(((unsigned char)s1[i]) - ((unsigned char)s2[i])));
}
