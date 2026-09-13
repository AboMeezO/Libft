#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_putstr_fd(void)
{
	printf("Test 1\n");
	printf("  input:    \"hello\", fd=1\n");
	printf("  expected: hello\n");
	printf("  actual:   ");
	ft_putstr_fd("hello", 1);
	printf("\n\n");
	printf("Test 2\n");
	printf("  input:    \"\", fd=1\n");
	printf("  expected: empty output\n");
	printf("  actual:   ");
	ft_putstr_fd("", 1);
	printf("\n\n");
}
