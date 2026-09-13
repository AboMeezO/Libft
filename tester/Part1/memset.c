#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_memset(void)
{
	char	buffer[6];

	buffer[5] = '\0';
	printf("Test 1\n");
	printf("  input:    buffer, 'a', 5\n");
	ft_memset(buffer, 'a', 5);
	printf("  expected: \"aaaaa\"\n");
	printf("  actual:   \"%s\"\n\n", buffer);
	printf("Test 2\n");
	printf("  input:    buffer, 'b', 0\n");
	ft_memset(buffer, 'b', 0);
	printf("  expected: \"aaaaa\"\n");
	printf("  actual:   \"%s\"\n\n", buffer);
}
