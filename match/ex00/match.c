/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 15:01:22 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/06 20:15:10 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#define END(x) (x == '\0')
#define STAR(x) (x == '*')

int		match(char *s1, char *s2)
{
	if (END(*s1) && (END(*s2) || STAR(*s2)))
		return (1);
	else if (END(*s1) || END(*s2))
		return (0);
	else if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	else if (STAR(*s2))
		return (match(s1 + 1, s2) || match(s1 + 1, s2 + 1));
	else
		return (0);
}
*/

int		match(char *s1, char *s2)
{
	while (*s2 == '*' && (*s1 != '\0' && *s2 != '\0'))
		s1++;
	while (*s2 != '*' && (*s1 != '\0' && *s2 != '\0'))
	{
		while (*s1 != *s2 && (*s1 != '\0' && *s2 != '\0'))
			s1++;
		if (*s1 == '\0' && *s2 == '\0')
			return (1);
		else
		{
			s2++;
			return (match(s1, s2));
		}
	}
   	while (*s2 != '*' && (*s1 != '\0' && *s2 != '\0'))
	{
		while (*s1 == *s2 && (*s1 != '\0' && *s2 != '\0'))
		{
			s1++;
			s2++;
		}
		if (*s2 == '*')
			return (1);
	}
	return (0);
}
