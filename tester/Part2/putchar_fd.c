#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_putchar_fd(void)
{
	printf("Test 1\n");
	printf("  input:    'A', fd=1\n");
	printf("  expected: A\n");
	printf("  actual:   ");
	ft_putchar_fd('A', 1);
	printf("\n\n");
}
