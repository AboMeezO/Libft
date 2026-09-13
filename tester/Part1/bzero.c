#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_bzero(void)
{
	char	buffer[5];

	buffer[0] = 'a';
	buffer[1] = 'b';
	buffer[2] = 'c';
	buffer[3] = 'd';
	buffer[4] = 'e';
	printf("\nft_bzero\n");
	ft_bzero(buffer, 5);
	print_case("all bytes zero", buffer[0] == 0 && buffer[4] == 0);
	buffer[0] = 'x';
	ft_bzero(buffer, 0);
	print_case("zero length", buffer[0] == 'x');
}
