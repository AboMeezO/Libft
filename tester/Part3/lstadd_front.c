#include <stdio.h>
#include <stdlib.h>
#include "../../libft.h"
#include "../tester.h"

void	test_lstadd_front(void)
{
	t_list	*first;
	t_list	*second;

	first = ft_lstnew("first");
	second = ft_lstnew("second");
	printf("Test 1\n");
	printf("  input:    list=\"second\", new=\"first\"\n");
	ft_lstadd_front(&second, first);
	printf("  expected: first -> second\n");
	printf("  actual:   %s -> %s\n\n", (char *)second->content, (char *)second->next->content);
	free(first);
	free(second);
}
