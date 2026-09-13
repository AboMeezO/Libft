#include <stdio.h>
#include <stdlib.h>
#include "../../libft.h"
#include "../tester.h"

void	test_lstsize(void)
{
	t_list	a;
	t_list	b;
	t_list	c;

	printf("\nft_lstsize\n");
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	print_case("three nodes", ft_lstsize(&a) == 3);
	print_case("empty list", ft_lstsize(NULL) == 0);
}
