#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_lstadd_front(void)
{
	t_list	first;
	t_list	second;
	t_list	*list;

	printf("\nft_lstadd_front\n");
	first.next = NULL;
	second.next = NULL;
	list = &first;
	ft_lstadd_front(&list, &second);
	print_case("new head", list == &second);
	print_case("old head follows", list->next == &first);
}
