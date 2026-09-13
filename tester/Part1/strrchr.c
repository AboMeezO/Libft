#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strrchr(void)
{
	char	*result;

	printf("Test 1\n");
	printf("  input:    \"hello\", 'l'\n");
	result = ft_strrchr("hello", 'l');
	printf("  expected: \"lo\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	printf("Test 2\n");
	printf("  input:    \"banana\", 'a'\n");
	result = ft_strrchr("banana", 'a');
	printf("  expected: \"a\" at the last position\n");
	printf("  actual:   \"%s\"\n\n", result);
	printf("Test 3\n");
	printf("  input:    \"hello\", 'z'\n");
	result = ft_strrchr("hello", 'z');
	printf("  expected: NULL\n");
	printf("  actual:   %s\n\n", result ? result : "NULL");
	printf("Test 4\n");
	printf("  input:    \"hello\", '\\0'\n");
	result = ft_strrchr("hello", '\0');
	printf("  expected: empty string at terminator\n");
	printf("  actual:   \"%s\"\n\n", result);
}
