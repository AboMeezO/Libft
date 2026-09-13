#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_memcmp(void)
{
	printf("\nft_memcmp\n");
	print_case("equal", ft_memcmp("abc", "abc", 3) == 0);
	print_case("less", ft_memcmp("abc", "abd", 3) < 0);
	print_case("greater", ft_memcmp("abd", "abc", 3) > 0);
	print_case("zero length", ft_memcmp("abc", "abd", 0) == 0);
	print_case("binary bytes", ft_memcmp("\1\2", "\1\3", 2) < 0);
}
