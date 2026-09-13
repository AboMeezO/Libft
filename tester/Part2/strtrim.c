#include <stdio.h>
#include <stdlib.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strtrim(void)
{
	char	*result;

	printf("Test 1\n");
	printf("  input:    \"  hello  \", set=\" \"\n");
	result = ft_strtrim("  hello  ", " ");
	printf("  expected: \"hello\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	free(result);
	printf("Test 2\n");
	printf("  input:    \"xxhelloxx\", set=\"x\"\n");
	result = ft_strtrim("xxhelloxx", "x");
	printf("  expected: \"hello\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	free(result);
	printf("Test 3\n");
	printf("  input:    \"xxxxx\", set=\"x\"\n");
	result = ft_strtrim("xxxxx", "x");
	printf("  expected: \"\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	free(result);
}
