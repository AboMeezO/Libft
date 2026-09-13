#include <stdio.h>
#include <string.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strlcpy(void)
{
	char	dst[6];
	size_t	result;

	printf("Test 1\n");
	printf("  input:    src=\"hello\", size=6\n");
	result = ft_strlcpy(dst, "hello", sizeof(dst));
	printf("  expected: return 5, dst=\"hello\"\n");
	printf("  actual:   return %zu, dst=\"%s\"\n\n", result, dst);
	printf("Test 2\n");
	printf("  input:    src=\"abcdef\", size=6\n");
	result = ft_strlcpy(dst, "abcdef", sizeof(dst));
	printf("  expected: return 6, dst=\"abcde\"\n");
	printf("  actual:   return %zu, dst=\"%s\"\n\n", result, dst);
	printf("Test 3\n");
	printf("  input:    src=\"hello\", size=0\n");
	result = ft_strlcpy(dst, "hello", 0);
	printf("  expected: return 5\n");
	printf("  actual:   return %zu\n\n", result);
}
