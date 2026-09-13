#include <stdio.h>
#include <stdlib.h>
#include "../../libft.h"
#include "../tester.h"

static void	free_words(char **words)
{
	int	index;

	if (words == NULL)
		return ;
	index = 0;
	while (words[index])
	{
		free(words[index]);
		index++;
	}
	free(words);
}

static void	print_words(char **words)
{
	int	index;

	if (words == NULL)
	{
		printf("NULL\n");
		return ;
	}
	index = 0;
	while (words[index])
	{
		printf("\"%s\" ", words[index]);
		index++;
	}
	printf("\n");
}

void	test_split(void)
{
	char	**words;

	printf("Test 1\n");
	printf("  input:    \"hello world\", ' '\n");
	words = ft_split("hello world", ' ');
	printf("  expected: [\"hello\", \"world\"]\n");
	printf("  actual:   [");
	print_words(words);
	printf("\n");
	free_words(words);
	printf("Test 2\n");
	printf("  input:    \"  hello   world  \", ' '\n");
	words = ft_split("  hello   world  ", ' ');
	printf("  expected: [\"hello\", \"world\"]\n");
	printf("  actual:   [");
	print_words(words);
	printf("\n");
	free_words(words);
	printf("Test 3\n");
	printf("  input:    \"hello\", ' '\n");
	words = ft_split("hello", ' ');
	printf("  expected: [\"hello\"]\n");
	printf("  actual:   [");
	print_words(words);
	printf("\n");
	free_words(words);
	printf("Test 4\n");
	printf("  input:    \"   \", ' '\n");
	words = ft_split("   ", ' ');
	printf("  expected: []\n");
	printf("  actual:   [");
	print_words(words);
	printf("\n");
	free_words(words);
}
