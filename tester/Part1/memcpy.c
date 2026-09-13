#include <stdio.h>
#include <string.h>
#include "../../libft.h"
#include "../tester.h"

void	test_memcpy(void)
{
	char	src[] = "hello";
	char	dst[6];

	printf("\nft_memcpy\n");
	ft_memcpy(dst, src, 6);
	print_case("copy string", strcmp(dst, "hello") == 0);
	print_case("copies terminator", dst[5] == '\0');
	ft_memcpy(dst, "abcde", 0);
	print_case("zero length", strcmp(dst, "hello") == 0);
}
