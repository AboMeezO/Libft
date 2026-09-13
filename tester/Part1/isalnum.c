#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_isalnum(void)
{
	printf("Test 1\n");
	printf("  input:    'A'\n");
	printf("  expected: 1\n");
	printf("  actual:   %d\n\n", ft_isalnum('A'));
	printf("Test 2\n");
	printf("  input:    '7'\n");
	printf("  expected: 1\n");
	printf("  actual:   %d\n\n", ft_isalnum('7'));
	printf("Test 3\n");
	printf("  input:    '-'\n");
	printf("  expected: 0\n");
	printf("  actual:   %d\n\n", ft_isalnum('-'));
	printf("Test 4\n");
	printf("  input:    ' ' (space)\n");
	printf("  expected: 0\n");
	printf("  actual:   %d\n\n", ft_isalnum(' '));
}
