#include <stdio.h>
#include <string.h>
#include "../../libft.h"
#include "../tester.h"

static void	uppercase(unsigned int index, char *character)
{
	(void)index;
	if (*character >= 'a' && *character <= 'z')
		*character -= 32;
}

void	test_striteri(void)
{
	char	str[6];

	printf("\nft_striteri\n");
	strcpy(str, "hello");
	ft_striteri(str, uppercase);
	print_case("transform", strcmp(str, "HELLO") == 0);
	strcpy(str, "HELLO");
	ft_striteri(str, uppercase);
	print_case("unchanged uppercase", strcmp(str, "HELLO") == 0);
}
