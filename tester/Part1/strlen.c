#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strlen(void)
{
	printf("Test 1\n");
	printf("  input:    \"\"\n");
	printf("  expected: 0\n");
	printf("  actual:   %zu\n\n", ft_strlen(""));
	printf("Test 2\n");
	printf("  input:    \"hello\"\n");
	printf("  expected: 5\n");
	printf("  actual:   %zu\n\n", ft_strlen("hello"));
	printf("Test 3\n");
	printf("  input:    \"hello world\"\n");
	printf("  expected: 11\n");
	printf("  actual:   %zu\n\n", ft_strlen("hello world"));
	printf("Test 4\n");
	printf("  input:    \"a\\nb\"\n");
	printf("  expected: 3\n");
	printf("  actual:   %zu\n\n", ft_strlen("a\nb"));
}
