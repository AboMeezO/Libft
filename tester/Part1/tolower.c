#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_tolower(void)
{
	printf("\nft_tolower\n");
	print_case("uppercase", ft_tolower('A') == 'a');
	print_case("Z", ft_tolower('Z') == 'z');
	print_case("lowercase", ft_tolower('a') == 'a');
	print_case("digit", ft_tolower('1') == '1');
	print_case("symbol", ft_tolower('-') == '-');
}
