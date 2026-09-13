#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_isalpha(void)
{
	printf("\nft_isalpha\n");
	print_case("uppercase", ft_isalpha('A') == 1);
	print_case("lowercase", ft_isalpha('z') == 1);
	print_case("digit", ft_isalpha('0') == 0);
	print_case("null", ft_isalpha(0) == 0);
	print_case("before A", ft_isalpha('@') == 0);
	print_case("after z", ft_isalpha('{') == 0);
}
