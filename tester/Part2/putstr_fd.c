#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_putstr_fd(void)
{
	printf("\nft_putstr_fd\n");
	printf("  expected: hello world\n  output:   ");
	ft_putstr_fd("hello world", 1);
	printf("\n");
	print_case("manual output check", 1);
}
