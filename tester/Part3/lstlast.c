#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_lstlast(void)
{
	t_list	a;
	t_list	b;

	a.content = "first";
	a.next = &b;
	b.content = "last";
	b.next = NULL;
	printf("Test 1\n");
	printf("  input:    list [\"first\", \"last\"]\n");
	printf("  expected: \"last\"\n");
	printf("  actual:   \"%s\"\n\n", (char *)ft_lstlast(&a)->content);
	printf("Test 2\n");
	printf("  input:    NULL\n");
	printf("  expected: NULL\n");
	printf("  actual:   %s\n\n", ft_lstlast(NULL) ? "not NULL" : "NULL");
}
