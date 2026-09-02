/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammad.mahmoud@learner.42.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 23:51:49 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/03 01:22:11 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_words(char *str, char c)
{
	int	index;
	int	count;
	int	is_word;

	index = 0;
	count = 0;
	is_word = 0;
	while (str[index])
	{
		if (str[index] == c)
			is_word = 0;
		else if (!is_word)
		{
			is_word = 1;
			count++;
		}
		index++;
	}
	return (count);
}

int	get_word_length(char *str, int start, char c)
{
	int	length;

	length = 0;
	while (str[start + length]
		&& !(str[start + length] == c))
		length++;
	return (length);
}

char	*copy_word(char *str, int start, int length)
{
	int		index;
	char	*word;

	word = malloc(sizeof(char) * (length + 1));
	index = 0;
	while (index < length)
	{
		word[index] = str[start + index];
		index++;
	}
	word[index] = '\0';
	return (word);
}

char	**ft_split(char *str, char c)
{
	char	**result;
	int		words_count;
	int		index_string;
	int		index_word;
	int		length;

	words_count = count_words(str, c);
	result = malloc(sizeof(char *) * (words_count + 1));
	if (!result)
		return (0);
	index_string = 0;
	index_word = 0;
	while (str[index_string])
	{
		while (str[index_string] && (str[index_string] == c))
			index_string++;
		if (!str[index_string])
			break ;
		length = get_word_length(str, index_string, c);
		result[index_word] = copy_word(str, index_string, length);
		index_word++;
		index_string += length;
	}
	result[index_word] = 0;
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	char	**result;
	int		index;

	result = ft_split("But, all of that was!!ripped 
        .apart ,when you refused to fight", ' ');
	index = 0;
	while (result[index])
	{
		printf("[%s]\n", result[index]);
		free(result[index]);
		index++;
	}
	free(result);
	return (0);
}
*/