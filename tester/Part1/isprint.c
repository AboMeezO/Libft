#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_isprint(void)
{
	printf("\nft_isprint\n");
	print_case("space", ft_isprint(32) == 1);
	print_case("tilde", ft_isprint(126) == 1);
	print_case("31", ft_isprint(31) == 0);
	print_case("127", ft_isprint(127) == 0);
	print_case("null", ft_isprint(0) == 0);
}
