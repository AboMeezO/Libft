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

	printf("\nft_lstiter\n");
	first.content = "hello ";
	first.next = &second;
	second.content = "world";
	second.next = NULL;
	printf("  expected: hello world\n  output:   ");
	ft_lstiter(&first, print_content);
	printf("\n");
	print_case("manual output check", 1);
}
