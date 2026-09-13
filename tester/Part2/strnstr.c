#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strnstr(void)
{
	char	*str;

	str = "hello world";
	printf("\nft_strnstr\n");
	print_case("found", ft_strnstr(str, "world", 11) == str + 6);
	print_case("missing", ft_strnstr(str, "mars", 11) == NULL);
	print_case("outside len", ft_strnstr(str, "world", 5) == NULL);
	print_case("partial needle", ft_strnstr(str, "world", 9) == NULL);
	print_case("empty needle", ft_strnstr(str, "", 0) == str);
	print_case("exact boundary", ft_strnstr(str, "hello", 5) == str);
}
