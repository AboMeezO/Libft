#include <stdio.h>
#include <stdlib.h>
#include "../../libft.h"
#include "../tester.h"

void	test_lstnew(void)
{
	char	*content;
	t_list	*node;

	printf("\nft_lstnew\n");
	content = "hello";
	node = ft_lstnew(content);
	print_case("content", node && node->content == content);
	print_case("next is NULL", node && node->next == NULL);
	free(node);
}
