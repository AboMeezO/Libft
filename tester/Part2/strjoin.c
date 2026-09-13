#include <stdio.h>
#include <stdlib.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strjoin(void)
{
	char	*result;

	printf("Test 1\n");
	printf("  input:    \"hello\", \" world\"\n");
	result = ft_strjoin("hello", " world");
	printf("  expected: \"hello world\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	free(result);
	printf("Test 2\n");
	printf("  input:    \"\", \"hello\"\n");
	result = ft_strjoin("", "hello");
	printf("  expected: \"hello\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	free(result);
	printf("Test 3\n");
	printf("  input:    \"hello\", \"\"\n");
	result = ft_strjoin("hello", "");
	printf("  expected: \"hello\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	free(result);
}
