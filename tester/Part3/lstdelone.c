#include <stdio.h>
#include <stdlib.h>
#include "../../libft.h"
#include "../tester.h"

static void	delete_content(void *content)
{
	free(content);
}

void	test_lstdelone(void)
{
	char	*content;
	t_list	*node;

	content = malloc(6);
	if (content == NULL)
		return ;
	content[0] = 'h';
	content[1] = 'e';
	content[2] = 'l';
	content[3] = 'l';
	content[4] = 'o';
	content[5] = '\0';
	node = ft_lstnew(content);
	printf("Test 1\n");
	printf("  input:    node with content=\"hello\"\n");
	printf("  expected: node content is deleted\n");
	ft_lstdelone(node, delete_content);
	printf("  actual:   node was passed to delete function\n\n");
}
