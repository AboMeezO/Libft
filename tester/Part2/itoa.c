#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../libft.h"
#include "../tester.h"

void	test_itoa(void)
{
	char	*result;

	printf("\nft_itoa\n");
	result = ft_itoa(0);
	print_case("zero", result != NULL && strcmp(result, "0") == 0);
	free(result);
	result = ft_itoa(42);
	print_case("positive", result != NULL && strcmp(result, "42") == 0);
	free(result);
	result = ft_itoa(-42);
	print_case("negative", result != NULL && strcmp(result, "-42") == 0);
	free(result);
	result = ft_itoa(2147483647);
	print_case("int max", result != NULL && strcmp(result, "2147483647") == 0);
	free(result);
	result = ft_itoa(-2147483648);
	print_case("int min", result != NULL && strcmp(result, "-2147483648") == 0);
	free(result);
}
