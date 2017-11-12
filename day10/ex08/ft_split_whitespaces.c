/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 15:53:37 by ypikul            #+#    #+#             */
/*   Updated: 2017/08/05 22:14:02 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#define ISWHITESPACE(i) (i == ' ' || i == '\n' || i == '\t')
#define ISENDOFARRAY(i) (i == '\0')

int		ft_word_count(char *str)
{
	char	*temp_str;
	int		is_word;
	int		word_counter;

	temp_str = str;
	is_word = 0;
	word_counter = 0;
	while (*temp_str)
	{
		is_word = 0;
		while (ISWHITESPACE(*temp_str) && !(ISENDOFARRAY(*temp_str)))
			temp_str++;
		while (!(ISWHITESPACE(*temp_str)) && !(ISENDOFARRAY(*temp_str)))
		{
			if (is_word == 0)
				is_word = 1;
			temp_str++;
		}
		if (is_word)
			word_counter++;
	}
	return (word_counter + 1);
}

int		ft_word_size(char *str)
{
	int		i;
	char	*temp_str;

	temp_str = str;
	i = 0;
	while (ISWHITESPACE(*temp_str) && !(ISENDOFARRAY(*temp_str)))
		temp_str++;
	while (!(ISWHITESPACE(*temp_str)) && !(ISENDOFARRAY(*temp_str)))
	{
		temp_str++;
		i++;
	}
	return (i + 1);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		number_of_words;
	char	**array_for_words;
	char	*array_for_word;
	int		words_added;

	number_of_words = ft_word_count(str);
	array_for_words = (char **)malloc(sizeof(char *) * number_of_words);
	words_added = 0;
	while (words_added < (number_of_words - 1))
	{
		i = 0;
		array_for_word = (char *)malloc(sizeof(char) * ft_word_size(str));
		while (ISWHITESPACE(str[0]) && !(ISENDOFARRAY(str[0])))
			str++;
		while (!(ISWHITESPACE(str[0])) && !(ISENDOFARRAY(str[0])))
			array_for_word[i++] = *str++;
		array_for_word[i] = '\0';
		array_for_words[words_added] = array_for_word;
		words_added++;
	}
	array_for_words[number_of_words - 1] = 0;
	return (array_for_words);
}
