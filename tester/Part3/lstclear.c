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

	first = ft_lstnew(malloc(2));
	second = ft_lstnew(malloc(2));
	if (first == NULL || second == NULL)
	{
		free(first);
		free(second);
		return ;
	}
	first->next = second;
	list = first;
	printf("Test 1\n");
	printf("  input:    list with 2 nodes\n");
	ft_lstclear(&list, delete_content);
	printf("  expected: list=NULL\n");
	printf("  actual:   %s\n\n", list == NULL ? "list=NULL" : "list is not NULL");
}
