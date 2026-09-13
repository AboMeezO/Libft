#include <stdio.h>
#include <string.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strlcpy(void)
{
	char	dst[6];
	size_t	result;

	printf("\nft_strlcpy\n");
	result = ft_strlcpy(dst, "hello", sizeof(dst));
	print_case("full copy", result == 5 && strcmp(dst, "hello") == 0);
	result = ft_strlcpy(dst, "abcdef", sizeof(dst));
	print_case("truncation", result == 6 && strcmp(dst, "abcde") == 0);
	result = ft_strlcpy(dst, "hello", 0);
	print_case("zero size return", result == 5);
	print_case("zero size unchanged", dst[0] == 'a');
}
