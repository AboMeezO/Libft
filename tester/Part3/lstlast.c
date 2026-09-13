#include <stdio.h>
#include "../../libft.h"
#include "../tester.h"

void	test_lstlast(void)
{
	t_list	a;
	t_list	b;

	printf("\nft_lstlast\n");
a.next = &b;
b.next = NULL;
	print_case("last node", ft_lstlast(&a) == &b);
	print_case("single node", ft_lstlast(&b) == &b);
	print_case("empty list", ft_lstlast(NULL) == NULL);
}
