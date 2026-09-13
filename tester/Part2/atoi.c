#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_atoi(void)
{
	printf("\nft_atoi\n");
	print_case("positive", ft_atoi("42") == 42);
	print_case("negative", ft_atoi("-42") == -42);
	print_case("plus sign", ft_atoi("+42") == 42);
	print_case("leading spaces", ft_atoi("   42") == 42);
	print_case("mixed whitespace", ft_atoi("\t\n\v\f\r 42") == 42);
	print_case("trailing text", ft_atoi("42abc") == 42);
	print_case("only sign", ft_atoi("+") == 0);
	print_case("no digits", ft_atoi("abc") == 0);
	print_case("leading zeros", ft_atoi("00042") == 42);
}
