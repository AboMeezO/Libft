#include <stdio.h>
#include <stdlib.h>
#include "../../libft.h"
#include "../tester.h"

void	test_itoa(void)
{
	char	*result;

	printf("Test 1\n");
	printf("  input:    0\n");
	result = ft_itoa(0);
	printf("  expected: \"0\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	free(result);
	printf("Test 2\n");
	printf("  input:    42\n");
	result = ft_itoa(42);
	printf("  expected: \"42\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	free(result);
	printf("Test 3\n");
	printf("  input:    -42\n");
	result = ft_itoa(-42);
	printf("  expected: \"-42\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	free(result);
	printf("Test 4\n");
	printf("  input:    INT_MIN\n");
	result = ft_itoa(-2147483648);
	printf("  expected: \"-2147483648\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	free(result);
}
