#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../libft.h"
#include "../tester.h"

void	test_substr(void)
{
	char	*result;

	printf("\nft_substr\n");
	result = ft_substr("hello world", 0, 5);
	print_case("from start", result != NULL && strcmp(result, "hello") == 0);
	free(result);
	result = ft_substr("hello world", 6, 5);
	print_case("middle", result != NULL && strcmp(result, "world") == 0);
	free(result);
	result = ft_substr("hello", 20, 5);
	print_case("start past end", result != NULL && strcmp(result, "") == 0);
	free(result);
	result = ft_substr("hello", 1, 0);
	print_case("zero length", result != NULL && strcmp(result, "") == 0);
	free(result);
	result = ft_substr("hello", 3, 20);
	print_case("length past end", result != NULL && strcmp(result, "lo") == 0);
	free(result);
}
