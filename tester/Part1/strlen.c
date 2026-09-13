#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strlen(void)
{
	printf("\nft_strlen\n");
	print_case("empty", ft_strlen("") == 0);
	print_case("hello", ft_strlen("hello") == 5);
	print_case("spaces", ft_strlen("hello world") == 11);
	print_case("one char", ft_strlen("x") == 1);
	print_case("newline", ft_strlen("a\nb") == 3);
}
