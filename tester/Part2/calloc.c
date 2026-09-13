#include <stdio.h>
#include <stdlib.h>
#include "../../libft.h"
#include "../tester.h"

void	test_calloc(void)
{
	unsigned char	*buffer;
	size_t			index;

	printf("Test 1\n");
	printf("  input:    calloc(10, 1)\n");
	buffer = ft_calloc(10, sizeof(unsigned char));
	printf("  expected: 10 zero bytes\n");
	printf("  actual:   ");
	index = 0;
	while (buffer && index < 10)
	{
		printf("%d ", buffer[index]);
		index++;
	}
	printf("\n\n");
	free(buffer);
	printf("Test 2\n");
	printf("  input:    calloc(0, 10)\n");
	buffer = ft_calloc(0, 10);
	printf("  expected: valid allocation or NULL\n");
	printf("  actual:   %s\n\n", buffer ? "non-NULL" : "NULL");
	free(buffer);
	printf("Test 3\n");
	printf("  input:    calloc(SIZE_MAX, 2)\n");
	buffer = ft_calloc((size_t)-1, 2);
	printf("  expected: NULL\n");
	printf("  actual:   %s\n\n", buffer ? "non-NULL" : "NULL");
	free(buffer);
}
