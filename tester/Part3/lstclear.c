#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_lstclear(void)
{
	t_list	a;
	t_list	b;
	t_list	*list;

	printf("\nft_lstclear\n");
	a.next = &b;
	b.next = NULL;
	list = &a;
	ft_lstclear(&list, NULL);
	print_case("list becomes NULL", list == NULL);
}
