#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strchr(void)
{
	char	*str;

	str = "hello";
	printf("\nft_strchr\n");
	print_case("first char", ft_strchr(str, 'h') == str);
	print_case("middle char", ft_strchr(str, 'l') == str + 2);
	print_case("last char", ft_strchr(str, 'o') == str + 4);
	print_case("missing char", ft_strchr(str, 'z') == NULL);
	print_case("null terminator", ft_strchr(str, '\0') == str + 5);
}
