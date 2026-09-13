#include <stdio.h>
#include <string.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strlcat(void)
{
	char	dst[10];
	size_t	result;

	printf("\nft_strlcat\n");
	strcpy(dst, "42");
	result = ft_strlcat(dst, "libft", sizeof(dst));
	print_case("normal append", result == 7 && strcmp(dst, "42libft") == 0);
	strcpy(dst, "42");
	result = ft_strlcat(dst, "libft", 5);
	print_case("truncation", result == 7 && strcmp(dst, "42l") == 0);
	strcpy(dst, "42");
	result = ft_strlcat(dst, "libft", 0);
	print_case("zero size", result == 2);
	strcpy(dst, "abcdefghi");
	result = ft_strlcat(dst, "x", sizeof(dst));
	print_case("destination full", result == 10 && dst[9] == '\0');
}
