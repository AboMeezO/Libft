#include <stdio.h>
#include <stdlib.h>
#include "../../libft.h"
#include "../tester.h"

void	test_calloc(void)
{
	unsigned char	*buffer;
	size_t			index;

	printf("\nft_calloc\n");
	buffer = ft_calloc(10, sizeof(unsigned char));
	if (buffer == NULL)
	{
		print_case("allocation", 0);
		return ;
	}
	index = 0;
	while (index < 10)
	{
		if (buffer[index] != 0)
		{
			print_case("zero initialized", 0);
			free(buffer);
			return ;
		}
		index++;
	}
	print_case("zero initialized", 1);
	free(buffer);
	print_case("zero size", ft_calloc(0, 10) != NULL);
	print_case("overflow", ft_calloc((size_t)-1, 2) == NULL);
}
