#include <stdio.h>
#include <string.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strlcat(void)
{
	char	dst[10];
	size_t	result;

	strcpy(dst, "42");
	printf("Test 1\n");
	printf("  input:    dst=\"42\", src=\"libft\", size=10\n");
	result = ft_strlcat(dst, "libft", sizeof(dst));
	printf("  expected: return 7, dst=\"42libft\"\n");
	printf("  actual:   return %zu, dst=\"%s\"\n\n", result, dst);
	strcpy(dst, "42");
	printf("Test 2\n");
	printf("  input:    dst=\"42\", src=\"libft\", size=5\n");
	result = ft_strlcat(dst, "libft", 5);
	printf("  expected: return 7, dst=\"42l\"\n");
	printf("  actual:   return %zu, dst=\"%s\"\n\n", result, dst);
	strcpy(dst, "42");
	printf("Test 3\n");
	printf("  input:    dst=\"42\", src=\"libft\", size=0\n");
	result = ft_strlcat(dst, "libft", 0);
	printf("  expected: return 2\n");
	printf("  actual:   return %zu\n\n", result);
}
