#include <stdio.h>
#include <stdlib.h>
#include "../../libft.h"
#include "../tester.h"

void	test_lstadd_back(void)
{
	t_list	*first;
	t_list	*last;

	first = ft_lstnew("first");
	last = ft_lstnew("last");
	printf("Test 1\n");
	printf("  input:    list=\"first\", new=\"last\"\n");
	ft_lstadd_back(&first, last);
	printf("  expected: first -> last\n");
	printf("  actual:   %s -> %s\n\n", (char *)first->content, (char *)first->next->content);
	free(last);
	free(first);
}
