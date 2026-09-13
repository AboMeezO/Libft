#ifndef TESTER_H
# define TESTER_H

typedef int (*t_test)(void);

typedef struct s_test
{
	const char	*name;
	t_test		run;
} t_test_case;

int	test_isalpha(void);
int	test_isdigit(void);
int	test_isalnum(void);
int	test_isascii(void);
int	test_isprint(void);
int	test_toupper(void);
int	test_tolower(void);
int	test_strlen(void);
int	test_strchr(void);
int	test_strrchr(void);
int	test_strncmp(void);
int	test_memset(void);
int	test_bzero(void);
int	test_memcpy(void);
int	test_memmove(void);
int	test_memchr(void);
int	test_memcmp(void);
int	test_atoi(void);
int	test_calloc(void);
int	test_strlcpy(void);
int	test_strlcat(void);
int	test_strnstr(void);
int	test_strdup(void);

#endif
