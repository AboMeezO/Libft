#include <stdio.h>
#include <string.h>
#include "../../libft.h"
#include "../tester.h"

void	test_memmove(void)
{
	char	buffer[7];

	strcpy(buffer, "123456");
	printf("Test 1\n");
	printf("  input:    \"123456\", move buffer to buffer + 2, 4\n");
	ft_memmove(buffer + 2, buffer, 4);
	printf("  expected: \"121234\"\n");
	printf("  actual:   \"%s\"\n\n", buffer);
	strcpy(buffer, "123456");
	printf("Test 2\n");
	printf("  input:    \"123456\", move buffer + 2 to buffer, 4\n");
	ft_memmove(buffer, buffer + 2, 4);
	buffer[4] = '\0';
	printf("  expected: \"3456\"\n");
	printf("  actual:   \"%s\"\n\n", buffer);
}
