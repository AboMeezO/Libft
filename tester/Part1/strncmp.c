#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strncmp(void)
{
	printf("Test 1\n");
	printf("  input:    \"abc\", \"abc\", 3\n");
	printf("  expected: 0\n");
	printf("  actual:   %d\n\n", ft_strncmp("abc", "abc", 3));
	printf("Test 2\n");
	printf("  input:    \"abc\", \"abd\", 3\n");
	printf("  expected: negative\n");
	printf("  actual:   %d\n\n", ft_strncmp("abc", "abd", 3));
	printf("Test 3\n");
	printf("  input:    \"abd\", \"abc\", 3\n");
	printf("  expected: positive\n");
	printf("  actual:   %d\n\n", ft_strncmp("abd", "abc", 3));
	printf("Test 4\n");
	printf("  input:    \"abc\", \"abd\", 0\n");
	printf("  expected: 0\n");
	printf("  actual:   %d\n\n", ft_strncmp("abc", "abd", 0));
	printf("Test 5\n");
	printf("  input:    \"abc\", \"abd\", 2\n");
	printf("  expected: 0\n");
	printf("  actual:   %d\n\n", ft_strncmp("abc", "abd", 2));
}
