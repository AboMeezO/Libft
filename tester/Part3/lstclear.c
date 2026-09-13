#include <stdio.h>
#include <stdlib.h>
#include "../../libft.h"
#include "../tester.h"

static void	delete_content(void *content)
{
	free(content);
}

void	test_lstclear(void)
{
	t_list	*first;
	t_list	*second;
	t_list	*list;

	printf("\nft_lstclear\n");
	first = ft_lstnew(malloc(2));
	second = ft_lstnew(malloc(2));
	if (first == NULL || second == NULL)
	{
		free(first);
		free(second);
		print_case("allocation", 0);
		return ;
	}
	first->next = second;
	list = first;
	ft_lstclear(&list, delete_content);
	print_case("list becomes NULL", list == NULL);
}
