#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_memchr(void)
{
	char	buffer[] = "hello";
	char	*result;

	printf("Test 1\n");
	printf("  input:    \"hello\", 'e', 5\n");
	result = ft_memchr(buffer, 'e', 5);
	printf("  expected: \"ello\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	printf("Test 2\n");
	printf("  input:    \"hello\", 'z', 5\n");
	result = ft_memchr(buffer, 'z', 5);
	printf("  expected: NULL\n");
	printf("  actual:   %s\n\n", result ? result : "NULL");
	printf("Test 3\n");
	printf("  input:    \"hello\", 'o', 2\n");
	result = ft_memchr(buffer, 'o', 2);
	printf("  expected: NULL\n");
	printf("  actual:   %s\n\n", result ? result : "NULL");
	printf("Test 4\n");
	printf("  input:    \"hello\", 'h', 0\n");
	result = ft_memchr(buffer, 'h', 0);
	printf("  expected: NULL\n");
	printf("  actual:   %s\n\n", result ? result : "NULL");
}
