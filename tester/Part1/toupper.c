#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_toupper(void)
{
	printf("\nft_toupper\n");
	print_case("lowercase", ft_toupper('a') == 'A');
	print_case("z", ft_toupper('z') == 'Z');
	print_case("uppercase", ft_toupper('A') == 'A');
	print_case("digit", ft_toupper('1') == '1');
	print_case("symbol", ft_toupper('-') == '-');
}
