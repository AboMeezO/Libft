#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

static void	print_content(void *content)
{
	printf("%s", (char *)content);
}

void	test_lstiter(void)
{
	t_list	first;
	t_list	second;

	first.content = "hello ";
	first.next = &second;
	second.content = "world";
	second.next = NULL;
	printf("Test 1\n");
	printf("  input:    [\"hello \", \"world\"]\n");
	printf("  expected: hello world\n");
	printf("  actual:   ");
	ft_lstiter(&first, print_content);
	printf("\n\n");
}
