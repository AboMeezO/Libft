#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strchr(void)
{
	char	*str;
	char	*result;

	str = "hello";
	printf("Test 1\n");
	printf("  input:    \"hello\", 'h'\n");
	result = ft_strchr(str, 'h');
	printf("  expected: \"hello\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	printf("Test 2\n");
	printf("  input:    \"hello\", 'l'\n");
	result = ft_strchr(str, 'l');
	printf("  expected: \"llo\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	printf("Test 3\n");
	printf("  input:    \"hello\", 'z'\n");
	result = ft_strchr(str, 'z');
	printf("  expected: NULL\n");
	printf("  actual:   %s\n\n", result ? result : "NULL");
	printf("Test 4\n");
	printf("  input:    \"hello\", '\\0'\n");
	result = ft_strchr(str, '\0');
	printf("  expected: empty string at terminator\n");
	printf("  actual:   \"%s\"\n\n", result);
}
