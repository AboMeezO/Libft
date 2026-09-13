#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strtrim(void)
{
	char	*result;

	printf("\nft_strtrim\n");
	result = ft_strtrim("  hello  ", " ");
	print_case("spaces", result != NULL && strcmp(result, "hello") == 0);
	free(result);
	result = ft_strtrim("xxhelloxx", "x");
	print_case("custom set", result != NULL && strcmp(result, "hello") == 0);
	free(result);
	result = ft_strtrim("hello", "x");
	print_case("nothing to trim", result != NULL && strcmp(result, "hello") == 0);
	free(result);
	result = ft_strtrim("xxxxx", "x");
	print_case("all trimmed", result != NULL && strcmp(result, "") == 0);
	free(result);
	result = ft_strtrim("  hello world  ", " ");
	print_case("internal spaces", result != NULL && strcmp(result, "hello world") == 0);
	free(result);
}
