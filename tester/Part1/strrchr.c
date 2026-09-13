#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strrchr(void)
{
	char	*str;
	char	*banana;

	str = "hello";
	banana = "banana";
	printf("\nft_strrchr\n");
	print_case("last occurrence", ft_strrchr(str, 'l') == str + 3);
	print_case("first char", ft_strrchr(str, 'h') == str);
	print_case("missing char", ft_strrchr(str, 'z') == NULL);
	print_case("null terminator", ft_strrchr(str, '\0') == str + 5);
	print_case("repeated char", ft_strrchr(banana, 'a') == banana + 5);
}
