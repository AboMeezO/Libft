#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_putnbr_fd(void)
{
	printf("Test 1\n");
	printf("  input:    42, fd=1\n");
	printf("  expected: 42\n");
	printf("  actual:   ");
	ft_putnbr_fd(42, 1);
	printf("\n\n");
	printf("Test 2\n");
	printf("  input:    -42, fd=1\n");
	printf("  expected: -42\n");
	printf("  actual:   ");
	ft_putnbr_fd(-42, 1);
	printf("\n\n");
	printf("Test 3\n");
	printf("  input:    0, fd=1\n");
	printf("  expected: 0\n");
	printf("  actual:   ");
	ft_putnbr_fd(0, 1);
	printf("\n\n");
}
