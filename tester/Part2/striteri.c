#include <stdio.h>
#include <string.h>
#include "../../libft.h"
#include "../tester.h"

static void	uppercase(unsigned int index, char *character)
{
	(void)index;
	if (*character >= 'a' && *character <= 'z')
		*character -= 32;
}

void	test_striteri(void)
{
	char	str[6];

	strcpy(str, "hello");
	printf("Test 1\n");
	printf("  input:    \"hello\", uppercase callback\n");
	ft_striteri(str, uppercase);
	printf("  expected: \"HELLO\"\n");
	printf("  actual:   \"%s\"\n\n", str);
	strcpy(str, "HELLO");
	printf("Test 2\n");
	printf("  input:    \"HELLO\", uppercase callback\n");
	ft_striteri(str, uppercase);
	printf("  expected: \"HELLO\"\n");
	printf("  actual:   \"%s\"\n\n", str);
}
