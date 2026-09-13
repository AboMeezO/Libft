#include <stdio.h>
#include <stdlib.h>
#include "../../libft.h"
#include "../tester.h"

static char	upper(unsigned int index, char character)
{
	(void)index;
	if (character >= 'a' && character <= 'z')
		return (character - 32);
	return (character);
}

void	test_strmapi(void)
{
	char	*result;

	printf("Test 1\n");
	printf("  input:    \"hello\", uppercase callback\n");
	result = ft_strmapi("hello", upper);
	printf("  expected: \"HELLO\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	free(result);
	printf("Test 2\n");
	printf("  input:    \"\", uppercase callback\n");
	result = ft_strmapi("", upper);
	printf("  expected: \"\"\n");
	printf("  actual:   \"%s\"\n\n", result);
	free(result);
}
