#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_memset(void)
{
	char	buffer[6];

	printf("\nft_memset\n");
	ft_memset(buffer, 'a', 5);
	buffer[5] = '\0';
	print_case("fill bytes", buffer[0] == 'a' && buffer[4] == 'a');
	print_case("terminator untouched", buffer[5] == '\0');
	ft_memset(buffer, 0, 0);
	print_case("zero length", buffer[0] == 'a');
}
