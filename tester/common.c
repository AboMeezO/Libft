#include <stdio.h>
#include "tester.h"

void	print_case(const char *name, int passed)
{
	printf("  %-24s %s\n", name, passed ? "OK" : "KO");
}

void	print_int_case(int number, const char *input, int expected, int actual)
{
	printf("Test %d\n", number);
	printf("  input:    %s\n", input);
	printf("  expected: %d\n", expected);
	printf("  actual:   %d\n\n", actual);
}

void	print_str_case(int number, const char *input, const char *expected,
	const char *actual)
{
	printf("Test %d\n", number);
	printf("  input:    %s\n", input);
	printf("  expected: %s\n", expected);
	printf("  actual:   %s\n\n", actual);
}
