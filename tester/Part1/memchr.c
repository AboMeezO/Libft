#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_memchr(void)
{
	char	buffer[] = "hello";

	printf("Test 1\n");
	printf("  input:    \"hello\", 'e', 5\n");
	printf("  expected: address of 'e'\n");
	printf("  actual:   %s\n\n", (char *)ft_memchr(buffer, 'e', 5));
	printf("Test 2\n");
	printf("  input:    \"hello\", 'z', 5\n");
	printf("  expected: NULL\n");
	printf("  actual:   %s\n\n", (char *)ft_memchr(buffer, 'z', 5));
	printf("Test 3\n");
	printf("  input:    \"hello\", 'o', 2\n");
	printf("  expected: NULL\n");
	printf("  actual:   %s\n\n", (char *)ft_memchr(buffer, 'o', 2));
	printf("Test 4\n");
	printf("  input:    \"hello\", 'h', 0\n");
	printf("  expected: NULL\n");
	printf("  actual:   %s\n\n", (char *)ft_memchr(buffer, 'h', 0));
}
