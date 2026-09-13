#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_isascii(void)
{
	printf("Test 1\n");
	printf("  input:    0\n");
	printf("  expected: 1\n");
	printf("  actual:   %d\n\n", ft_isascii(0));
	printf("Test 2\n");
	printf("  input:    127\n");
	printf("  expected: 1\n");
	printf("  actual:   %d\n\n", ft_isascii(127));
	printf("Test 3\n");
	printf("  input:    -1\n");
	printf("  expected: 0\n");
	printf("  actual:   %d\n\n", ft_isascii(-1));
	printf("Test 4\n");
	printf("  input:    128\n");
	printf("  expected: 0\n");
	printf("  actual:   %d\n\n", ft_isascii(128));
}
