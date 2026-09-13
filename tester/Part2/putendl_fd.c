#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_putendl_fd(void)
{
	printf("Test 1\n");
	printf("  input:    \"hello\", fd=1\n");
	printf("  expected: hello + newline\n");
	printf("  actual:   ");
	ft_putendl_fd("hello", 1);
	printf("\n");
}
