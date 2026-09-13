#include <stdio.h>
#include <stdlib.h>
#include "../../libft.h"
#include "../tester.h"

void	test_lstsize(void)
{
	t_list	a;
	t_list	b;
	t_list	c;

	a.next = &b;
	b.next = &c;
	c.next = NULL;
	printf("Test 1\n");
	printf("  input:    list with 3 nodes\n");
	printf("  expected: 3\n");
	printf("  actual:   %d\n\n", ft_lstsize(&a));
	printf("Test 2\n");
	printf("  input:    NULL\n");
	printf("  expected: 0\n");
	printf("  actual:   %d\n\n", ft_lstsize(NULL));
}
