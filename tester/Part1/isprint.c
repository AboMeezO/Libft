#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_isprint(void)
{
	printf("Test 1\n");
	printf("  input:    'A'\n");
	printf("  expected: 1\n");
	printf("  actual:   %d\n\n", ft_isprint('A'));
	printf("Test 2\n");
	printf("  input:    ' ' (space)\n");
	printf("  expected: 1\n");
	printf("  actual:   %d\n\n", ft_isprint(' '));
	printf("Test 3\n");
	printf("  input:    31\n");
	printf("  expected: 0\n");
	printf("  actual:   %d\n\n", ft_isprint(31));
	printf("Test 4\n");
	printf("  input:    127\n");
	printf("  expected: 0\n");
	printf("  actual:   %d\n\n", ft_isprint(127));
}
