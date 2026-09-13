#include <stdio.h>
#include <stdlib.h>
#include "../../libft.h"
#include "../tester.h"

void	test_substr(void)
{
	char	*result;

	printf("Test 1\n");
	printf("  input:    \"hello world\", start=0, len=5\n");
	result = ft_substr("hello world", 0, 5);
	printf("  expected: \"hello\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	free(result);
	printf("Test 2\n");
	printf("  input:    \"hello world\", start=6, len=5\n");
	result = ft_substr("hello world", 6, 5);
	printf("  expected: \"world\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	free(result);
	printf("Test 3\n");
	printf("  input:    \"hello\", start=20, len=5\n");
	result = ft_substr("hello", 20, 5);
	printf("  expected: \"\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	free(result);
}
