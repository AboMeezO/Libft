#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_putnbr_fd(void)
{
	printf("\nft_putnbr_fd\n");
	printf("  expected: 42 -42 0 2147483647 -2147483648\n  output:   ");
	ft_putnbr_fd(42, 1);
	printf(" ");
	ft_putnbr_fd(-42, 1);
	printf(" ");
	ft_putnbr_fd(0, 1);
	printf(" ");
	ft_putnbr_fd(2147483647, 1);
	printf(" ");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");
	print_case("manual output check", 1);
}
