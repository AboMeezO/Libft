#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_isdigit(void)
{
	printf("Test 1\n");
	printf("  input:    '0'\n");
	printf("  expected: 1\n");
	printf("  actual:   %d\n\n", ft_isdigit('0'));
	printf("Test 2\n");
	printf("  input:    '9'\n");
	printf("  expected: 1\n");
	printf("  actual:   %d\n\n", ft_isdigit('9'));
	printf("Test 3\n");
	printf("  input:    'a'\n");
	printf("  expected: 0\n");
	printf("  actual:   %d\n\n", ft_isdigit('a'));
	printf("Test 4\n");
	printf("  input:    '/'\n");
	printf("  expected: 0\n");
	printf("  actual:   %d\n\n", ft_isdigit('/'));
}
