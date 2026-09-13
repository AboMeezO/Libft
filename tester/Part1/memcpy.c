#include <stdio.h>
#include <string.h>
#include "../../libft.h"
#include "../tester.h"

void	test_memcpy(void)
{
	char	src[] = "hello";
	char	dst[6];

	printf("Test 1\n");
	printf("  input:    dst, \"hello\", 6\n");
	ft_memcpy(dst, src, 6);
	printf("  expected: \"hello\"\n");
	printf("  actual:   \"%s\"\n\n", dst);
	printf("Test 2\n");
	printf("  input:    dst, \"abcde\", 0\n");
	ft_memcpy(dst, "abcde", 0);
	printf("  expected: \"hello\"\n");
	printf("  actual:   \"%s\"\n\n", dst);
}
