#include <stdio.h>
#include <string.h>
#include "../../libft.h"
#include "../tester.h"

void	test_memmove(void)
{
	char	buffer[7];

	printf("\nft_memmove\n");
	strcpy(buffer, "123456");
	ft_memmove(buffer + 2, buffer, 4);
	print_case("overlap forward", strcmp(buffer, "121234") == 0);
	strcpy(buffer, "123456");
	ft_memmove(buffer, buffer + 2, 4);
	buffer[4] = '\0';
	print_case("overlap backward", strcmp(buffer, "3456") == 0);
}
