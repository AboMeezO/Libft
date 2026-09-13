#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_atoi(void)
{
	printf("Test 1\n");
	printf("  input:    \"42\"\n");
	printf("  expected: 42\n");
	printf("  actual:   %d\n\n", ft_atoi("42"));
	printf("Test 2\n");
	printf("  input:    \"-42\"\n");
	printf("  expected: -42\n");
	printf("  actual:   %d\n\n", ft_atoi("-42"));
	printf("Test 3\n");
	printf("  input:    \"   42\"\n");
	printf("  expected: 42\n");
	printf("  actual:   %d\n\n", ft_atoi("   42"));
	printf("Test 4\n");
	printf("  input:    \"42abc\"\n");
	printf("  expected: 42\n");
	printf("  actual:   %d\n\n", ft_atoi("42abc"));
	printf("Test 5\n");
	printf("  input:    \"abc\"\n");
	printf("  expected: 0\n");
	printf("  actual:   %d\n\n", ft_atoi("abc"));
}
