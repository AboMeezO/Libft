#include <stdio.h>
#include <string.h>
#include "tester.h"

static int	run_test(char *name)
{
	int	result;

	result = -1;
	if (strcmp(name, "ft_isalpha") == 0)
		result = test_isalpha();
	else if (strcmp(name, "ft_isdigit") == 0)
		result = test_isdigit();
	else if (strcmp(name, "ft_isalnum") == 0)
		result = test_isalnum();
	else if (strcmp(name, "ft_isascii") == 0)
		result = test_isascii();
	else if (strcmp(name, "ft_isprint") == 0)
		result = test_isprint();
	else if (strcmp(name, "ft_toupper") == 0)
		result = test_toupper();
	else if (strcmp(name, "ft_tolower") == 0)
		result = test_tolower();
	else
	{
		printf("? %s: test not found\n", name);
		return (0);
	}
	if (result == 1)
		printf("OK  %s\n", name);
	else
		printf("KO  %s\n", name);
	return (result);
}

int	main(int argc, char **argv)
{
	int	index;
	int	passed;

	if (argc < 2)
	{
		printf("Usage: ./libft_tester <function> [function ...]\n");
		return (1);
	}
	passed = 0;
	index = 1;
	while (index < argc)
	{
		passed += run_test(argv[index]);
		index++;
	}
	printf("\n%d/%d tests passed\n", passed, argc - 1);
	return (passed != argc - 1);
}
