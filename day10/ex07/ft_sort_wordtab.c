/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 18:46:54 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/08 21:58:14 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
}

void	bubble_sort(char **array, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		if (ft_strcmp(array[i], array[i + 1]) > 0)
		{
			ft_swap(&array[i], &array[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}

void	ft_sort_wordtab(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != 0)
		i++;
	bubble_sort(tab, i - 1);
}
