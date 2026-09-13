#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_bzero(void)
{
	char	buffer[5];

	buffer[0] = 'a';
	buffer[1] = 'b';
	buffer[2] = 'c';
	buffer[3] = 'd';
	buffer[4] = 'e';
	printf("Test 1\n");
	printf("  input:    \"abcde\", 5\n");
	ft_bzero(buffer, 5);
	printf("  expected: 00 00 00 00 00\n");
	printf("  actual:   %d %d %d %d %d\n\n", buffer[0], buffer[1], buffer[2], buffer[3], buffer[4]);
	buffer[0] = 'x';
	printf("Test 2\n");
	printf("  input:    \"x\", 0\n");
	ft_bzero(buffer, 0);
	printf("  expected: x unchanged\n");
	printf("  actual:   %c\n\n", buffer[0]);
}
