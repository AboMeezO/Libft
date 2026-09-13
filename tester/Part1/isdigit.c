#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_isdigit(void)
{
	printf("\nft_isdigit\n");
	print_case("zero", ft_isdigit('0') == 1);
	print_case("nine", ft_isdigit('9') == 1);
	print_case("letter", ft_isdigit('a') == 0);
	print_case("before 0", ft_isdigit('/') == 0);
	print_case("after 9", ft_isdigit(':') == 0);
	print_case("null", ft_isdigit(0) == 0);
}
