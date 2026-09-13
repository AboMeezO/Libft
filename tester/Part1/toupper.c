#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_toupper(void)
{
	printf("Test 1\n");
	printf("  input:    'a'\n");
	printf("  expected: 'A'\n");
	printf("  actual:   '%c'\n\n", ft_toupper('a'));
	printf("Test 2\n");
	printf("  input:    'z'\n");
	printf("  expected: 'Z'\n");
	printf("  actual:   '%c'\n\n", ft_toupper('z'));
	printf("Test 3\n");
	printf("  input:    'A'\n");
	printf("  expected: 'A'\n");
	printf("  actual:   '%c'\n\n", ft_toupper('A'));
	printf("Test 4\n");
	printf("  input:    '1'\n");
	printf("  expected: '1'\n");
	printf("  actual:   '%c'\n\n", ft_toupper('1'));
}
