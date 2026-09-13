#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strncmp(void)
{
	printf("\nft_strncmp\n");
	print_case("equal", ft_strncmp("abc", "abc", 3) == 0);
	print_case("less", ft_strncmp("abc", "abd", 3) < 0);
	print_case("greater", ft_strncmp("abd", "abc", 3) > 0);
	print_case("zero length", ft_strncmp("abc", "abd", 0) == 0);
	print_case("difference after n", ft_strncmp("abc", "abd", 2) == 0);
	print_case("different lengths", ft_strncmp("abc", "abcd", 4) < 0);
}
