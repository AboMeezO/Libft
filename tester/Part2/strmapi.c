#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../libft.h"
#include "../tester.h"

static char	shift_char(unsigned int index, char character)
{
	(void)index;
	if (character >= 'a' && character <= 'z')
		return (character - 32);
	return (character);
}

void	test_strmapi(void)
{
	char	*result;

	printf("\nft_strmapi\n");
	result = ft_strmapi("hello", shift_char);
	print_case("transform", result != NULL && strcmp(result, "HELLO") == 0);
	free(result);
	result = ft_strmapi("", shift_char);
	print_case("empty string", result != NULL && strcmp(result, "") == 0);
	free(result);
}
