#ifndef TESTER_H
# define TESTER_H

# include <stddef.h>

typedef int (*t_test)(void);

typedef struct s_test
{
	const char	*name;
	t_test		run;
}t_test_case;

int	test_isalpha(void);
int	test_isdigit(void);
int	test_isalnum(void);
int	test_isascii(void);
int	test_isprint(void);
int	test_toupper(void);
int	test_tolower(void);

#endif
