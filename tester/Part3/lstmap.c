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

	first.content = "hello";
	first.next = &second;
	second.content = "world";
	second.next = NULL;
	printf("Test 1\n");
	printf("  input:    [\"hello\", \"world\"]\n");
	result = ft_lstmap(&first, duplicate_content, delete_content);
	printf("  expected: [\"hello\", \"world\"]\n");
	if (result && result->next)
		printf("  actual:   [\"%s\", \"%s\"]\n\n", (char *)result->content, (char *)result->next->content);
	else
		printf("  actual:   invalid list\n\n");
	ft_lstclear(&result, delete_content);
}
