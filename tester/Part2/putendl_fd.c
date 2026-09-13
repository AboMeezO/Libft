#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_putendl_fd(void)
{
	printf("\nft_putendl_fd\n");
	printf("  expected: hello world + newline\n  output:   ");
	ft_putendl_fd("hello world", 1);
	print_case("manual output check", 1);
}
