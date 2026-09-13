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
	char	*first_content;
	char	*second_content;
	t_list	first;
	t_list	second;
	t_list	*list;

	printf("\nft_lstclear\n");
	first_content = malloc(2);
	second_content = malloc(2);
	first.content = first_content;
	second.content = second_content;
	first.next = &second;
	second.next = NULL;
	list = &first;
	ft_lstclear(&list, delete_content);
	print_case("list becomes NULL", list == NULL);
}
