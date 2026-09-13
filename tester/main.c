#include <stdio.h>
#include <string.h>
#include "tester.h"

static const t_test_case g_tests[] = {
	{"ft_isalpha", test_isalpha},
	{"ft_isdigit", test_isdigit},
	{"ft_isalnum", test_isalnum},
	{"ft_isascii", test_isascii},
	{"ft_isprint", test_isprint},
	{"ft_toupper", test_toupper},
	{"ft_tolower", test_tolower},
};

static size_t	test_count(void)
{
	return (sizeof(g_tests) / sizeof(g_tests[0]));
}

static const t_test_case	*find_test(const char *name)
{
	size_t	index;

	index = 0;
	while (index < test_count())
	{
		if (strcmp(name, g_tests[index].name) == 0)
			return (&g_tests[index]);
		index++;
	}
	return (NULL);
}

static int	run_test(const char *name)
{
	const t_test_case	*test;
	int					result;

	test = find_test(name);
	if (test == NULL)
	{
		printf("\033[33m?\033[0m %s: no test registered\n", name);
		return (0);
	}
	result = test->run();
	if (result)
		printf("\033[32m✓\033[0m %s\n", name);
	else
		printf("\033[31m✗\033[0m %s\n", name);
	return (result);
}

int	main(int argc, char **argv)
{
	int	index;
	int	passed;

	if (argc < 2)
	{
		printf("Usage: ./tester <function> [function ...]\n");
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
