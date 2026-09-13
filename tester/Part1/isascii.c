#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_isascii(void)
{
	printf("\nft_isascii\n");
	print_case("zero", ft_isascii(0) == 1);
	print_case("127", ft_isascii(127) == 1);
	print_case("128", ft_isascii(128) == 0);
	print_case("-1", ft_isascii(-1) == 0);
	print_case("255", ft_isascii(255) == 0);
}
