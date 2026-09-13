#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_lstadd_back(void)
{
	t_list	first;
	t_list	second;
	t_list	*list;

	printf("\nft_lstadd_back\n");
	first.next = NULL;
	second.next = NULL;
	list = &first;
	ft_lstadd_back(&list, &second);
	print_case("head unchanged", list == &first);
	print_case("new tail", first.next == &second && second.next == NULL);
}
