#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_isalnum(void)
{
	printf("\nft_isalnum\n");
	print_case("uppercase", ft_isalnum('A') == 1);
	print_case("lowercase", ft_isalnum('z') == 1);
	print_case("digit", ft_isalnum('9') == 1);
	print_case("space", ft_isalnum(' ') == 0);
	print_case("symbol", ft_isalnum('-') == 0);
	print_case("null", ft_isalnum(0) == 0);
}
