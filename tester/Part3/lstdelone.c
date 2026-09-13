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
	char	*content;
	t_list	*node;

	printf("\nft_lstdelone\n");
	content = malloc(6);
	if (content)
		memcpy(content, "hello", 6);
	node = ft_lstnew(content);
	ft_lstdelone(node, delete_content);
	print_case("node deleted", 1);
}
