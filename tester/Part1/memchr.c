#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_memchr(void)
{
	char	buffer[] = "hello";

	printf("\nft_memchr\n");
	print_case("found", ft_memchr(buffer, 'e', 5) == buffer + 1);
	print_case("missing", ft_memchr(buffer, 'z', 5) == NULL);
	print_case("outside length", ft_memchr(buffer, 'o', 2) == NULL);
	print_case("zero length", ft_memchr(buffer, 'h', 0) == NULL);
}
