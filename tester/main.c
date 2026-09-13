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
	{"ft_strlen", test_strlen},
	{"ft_strchr", test_strchr},
	{"ft_strrchr", test_strrchr},
	{"ft_strncmp", test_strncmp},
	{"ft_memset", test_memset},
	{"ft_bzero", test_bzero},
	{"ft_memcpy", test_memcpy},
	{"ft_memmove", test_memmove},
	{"ft_memchr", test_memchr},
	{"ft_memcmp", test_memcmp},
	{"ft_atoi", test_atoi},
	{"ft_calloc", test_calloc},
	{"ft_strlcpy", test_strlcpy},
	{"ft_strlcat", test_strlcat},
	{"ft_strnstr", test_strnstr},
	{"ft_strdup", test_strdup},
	{"ft_itoa", test_itoa},
	{"ft_substr", test_substr},
	{"ft_strjoin", test_strjoin},
	{"ft_strtrim", test_strtrim},
	{"ft_split", test_split},
	{"ft_strmapi", test_strmapi},
	{"ft_striteri", test_striteri},
	{"ft_putchar_fd", test_putchar_fd},
	{"ft_putstr_fd", test_putstr_fd},
	{"ft_putendl_fd", test_putendl_fd},
	{"ft_putnbr_fd", test_putnbr_fd},
	{"ft_lstnew", test_lstnew},
	{"ft_lstsize", test_lstsize},
	{"ft_lstlast", test_lstlast},
	{"ft_lstadd_front", test_lstadd_front},
	{"ft_lstadd_back", test_lstadd_back},
	{"ft_lstdelone", test_lstdelone},
	{"ft_lstclear", test_lstclear},
	{"ft_lstiter", test_lstiter},
	{"ft_lstmap", test_lstmap},
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

	test = find_test(name);
	if (test == NULL)
	{
		printf("\n%s: test not found\n", name);
		return (0);
	}
	test->run();
	return (1);
}

int	main(int argc, char **argv)
{
	int	index;
	int	run;

	if (argc < 2)
	{
		printf("Usage: ./libft_tester <function> [function ...]\n");
		return (1);
	}
	run = 0;
	index = 1;
	while (index < argc)
	{
		run += run_test(argv[index]);
		index++;
	}
	printf("\n%d/%d functions ran\n", run, argc - 1);
	return (run != argc - 1);
}
