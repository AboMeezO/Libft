#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strdup(void)
{
	char	*result;

	printf("Test 1\n");
	printf("  input:    \"hello\"\n");
	result = ft_strdup("hello");
	printf("  expected: \"hello\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	free(result);
	printf("Test 2\n");
	printf("  input:    \"\"\n");
	result = ft_strdup("");
	printf("  expected: \"\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	free(result);
}
