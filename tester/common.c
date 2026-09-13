#include <stdio.h>
#include "tester.h"

void	print_case(const char *name, int passed)
{
	printf("  %-24s %s\n", name, passed ? "OK" : "KO");
}
