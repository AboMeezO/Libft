#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strjoin(void)
{
	char	*result;

	printf("\nft_strjoin\n");
	result = ft_strjoin("hello", " world");
	print_case("normal join", result != NULL && strcmp(result, "hello world") == 0);
	free(result);
	result = ft_strjoin("", "hello");
	print_case("empty first", result != NULL && strcmp(result, "hello") == 0);
	free(result);
	result = ft_strjoin("hello", "");
	print_case("empty second", result != NULL && strcmp(result, "hello") == 0);
	free(result);
	result = ft_strjoin("", "");
	print_case("both empty", result != NULL && strcmp(result, "") == 0);
	free(result);
}
