#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../libft.h"
#include "../tester.h"

static void	*duplicate_content(void *content)
{
	char	*copy;

	copy = malloc(strlen(content) + 1);
	if (copy)
		strcpy(copy, content);
	return (copy);
}

static void	delete_content(void *content)
{
	free(content);
}

void	test_lstmap(void)
{
	t_list	first;
	t_list	second;
	t_list	*result;

	printf("\nft_lstmap\n");
	first.content = "hello";
	first.next = &second;
	second.content = "world";
	second.next = NULL;
	result = ft_lstmap(&first, duplicate_content, delete_content);
	print_case("two nodes", result && result->next
		&& strcmp(result->content, "hello") == 0
		&& strcmp(result->next->content, "world") == 0);
	ft_lstclear(&result, delete_content);
}
