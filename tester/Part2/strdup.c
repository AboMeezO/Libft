#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../libft.h"
#include "../tester.h"

void	test_strdup(void)
{
	char	*source;
	char	*copy;

	printf("\nft_strdup\n");
	source = "hello";
	copy = ft_strdup(source);
	if (copy == NULL)
	{
		print_case("allocation", 0);
		return ;
	}
	print_case("content", strcmp(copy, source) == 0);
	print_case("separate allocation", copy != source);
	free(copy);
	copy = ft_strdup("");
	print_case("empty string", copy != NULL && strcmp(copy, "") == 0);
	free(copy);
}
