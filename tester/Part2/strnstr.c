#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strnstr(void)
{
	char	*result;

	printf("Test 1\n");
	printf("  input:    \"hello world\", \"world\", 11\n");
	result = ft_strnstr("hello world", "world", 11);
	printf("  expected: \"world\"\n");
	printf("  actual:   \"%s\"\n\n", result ? result : "NULL");
	printf("Test 2\n");
	printf("  input:    \"hello world\", \"mars\", 11\n");
	result = ft_strnstr("hello world", "mars", 11);
	printf("  expected: NULL\n");
	printf("  actual:   %s\n\n", result ? result : "NULL");
	printf("Test 3\n");
	printf("  input:    \"hello world\", \"world\", 5\n");
	result = ft_strnstr("hello world", "world", 5);
	printf("  expected: NULL\n");
	printf("  actual:   %s\n\n", result ? result : "NULL");
	printf("Test 4\n");
	printf("  input:    \"hello world\", \"\", 0\n");
	result = ft_strnstr("hello world", "", 0);
	printf("  expected: original string\n");
	printf("  actual:   \"%s\"\n\n", result ? result : "NULL");
}
