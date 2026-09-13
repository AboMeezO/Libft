#include <stdio.h>
#include <stdlib.h>
#include "../../libft.h"
#include "../tester.h"

static void	delete_content(void *content)
{
	free(content);
}

void	test_lstdelone(void)
{
	t_list	*node;

	printf("\nft_lstdelone\n");
	node = ft_lstnew(strdup("hello"));
	ft_lstdelone(node, delete_content);
	print_case("node deleted", 1);
}
