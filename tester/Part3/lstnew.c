#include <stdio.h>
#include <stdlib.h>
#include "../../libft.h"
#include "../tester.h"

void	test_lstnew(void)
{
	t_list	*node;

	printf("Test 1\n");
	printf("  input:    content=\"hello\"\n");
	node = ft_lstnew("hello");
	printf("  expected: content=\"hello\", next=NULL\n");
	printf("  actual:   content=\"%s\", next=%s\n\n", (char *)node->content, node->next == NULL ? "NULL" : "not NULL");
	free(node);
}
