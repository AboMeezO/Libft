#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../libft.h"
#include "../tester.h"

static void	free_words(char **words)
{
	int	index;

	index = 0;
	while (words[index])
	{
		free(words[index]);
		index++;
	}
	free(words);
}

void	test_split(void)
{
	char	**words;

	printf("\nft_split\n");
	words = ft_split("hello world", ' ');
	print_case("two words", words && words[0] && words[1]
		&& strcmp(words[0], "hello") == 0
		&& strcmp(words[1], "world") == 0 && words[2] == NULL);
	free_words(words);
	words = ft_split("  hello   world  ", ' ');
	print_case("repeated delimiter", words && words[0] && words[1]
		&& strcmp(words[0], "hello") == 0
		&& strcmp(words[1], "world") == 0 && words[2] == NULL);
	free_words(words);
	words = ft_split("hello", ' ');
	print_case("no delimiter", words && words[0]
		&& strcmp(words[0], "hello") == 0 && words[1] == NULL);
	free_words(words);
	words = ft_split("   ", ' ');
	print_case("only delimiters", words && words[0] == NULL);
	free_words(words);
}
