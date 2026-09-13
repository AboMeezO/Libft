#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_putchar_fd(void)
{
	printf("\nft_putchar_fd\n");
	printf("  expected: A\n  output:   ");
	ft_putchar_fd('A', 1);
	printf("\n");
	print_case("manual output check", 1);
}
