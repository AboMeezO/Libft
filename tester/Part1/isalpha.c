#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_isalpha(void)
{
	printf("Test 1\n");
	printf("  input:    'A'\n");
	printf("  expected: 1\n");
	printf("  actual:   %d\n\n", ft_isalpha('A'));
	printf("Test 2\n");
	printf("  input:    'z'\n");
	printf("  expected: 1\n");
	printf("  actual:   %d\n\n", ft_isalpha('z'));
	printf("Test 3\n");
	printf("  input:    '0'\n");
	printf("  expected: 0\n");
	printf("  actual:   %d\n\n", ft_isalpha('0'));
	printf("Test 4\n");
	printf("  input:    0\n");
	printf("  expected: 0\n");
	printf("  actual:   %d\n\n", ft_isalpha(0));
}
