#include "../libft.h"
#include "tester.h"

int	test_isalpha(void)
{
	return (ft_isalpha('A') == 1
		&& ft_isalpha('z') == 1
		&& ft_isalpha('0') == 0
		&& ft_isalpha(0) == 0);
}

int	test_isdigit(void)
{
	return (ft_isdigit('0') == 1
		&& ft_isdigit('9') == 1
		&& ft_isdigit('a') == 0
		&& ft_isdigit(0) == 0);
}

int	test_isalnum(void)
{
	return (ft_isalnum('A') == 1
		&& ft_isalnum('9') == 1
		&& ft_isalnum('-') == 0
		&& ft_isalnum(0) == 0);
}

int	test_isascii(void)
{
	return (ft_isascii(0) == 1
		&& ft_isascii(127) == 1
		&& ft_isascii(128) == 0
		&& ft_isascii(-1) == 0);
}

int	test_isprint(void)
{
	return (ft_isprint(32) == 1
		&& ft_isprint(126) == 1
		&& ft_isprint(31) == 0
		&& ft_isprint(127) == 0);
}

int	test_toupper(void)
{
	return (ft_toupper('a') == 'A'
		&& ft_toupper('z') == 'Z'
		&& ft_toupper('A') == 'A'
		&& ft_toupper('1') == '1');
}

int	test_tolower(void)
{
	return (ft_tolower('A') == 'a'
		&& ft_tolower('Z') == 'z'
		&& ft_tolower('a') == 'a'
		&& ft_tolower('1') == '1');
}

int	test_strlen(void)
{
	return (ft_strlen("") == 0
		&& ft_strlen("hello") == 5
		&& ft_strlen("hello world") == 11);
}

int	test_strchr(void)
{
	return (ft_strchr("hello", 'h') == &"hello"[0]
		&& ft_strchr("hello", 'l') == &"hello"[2]
		&& ft_strchr("hello", 'z') == NULL
		&& ft_strchr("hello", '\0') == &"hello"[5]);
}

int	test_strrchr(void)
{
	return (ft_strrchr("hello", 'l') == &"hello"[3]
		&& ft_strrchr("hello", 'h') == &"hello"[0]
		&& ft_strrchr("hello", 'z') == NULL
		&& ft_strrchr("hello", '\0') == &"hello"[5]);
}

int	test_strncmp(void)
{
	return (ft_strncmp("abc", "abc", 3) == 0
		&& ft_strncmp("abc", "abd", 3) < 0
		&& ft_strncmp("abd", "abc", 3) > 0
		&& ft_strncmp("abc", "abd", 0) == 0
		&& ft_strncmp("abc", "abcd", 4) < 0);
}

int	test_memset(void)
{
	char	buffer[6];

	ft_memset(buffer, 'a', 5);
	buffer[5] = '\0';
	return (buffer[0] == 'a' && buffer[4] == 'a' && buffer[5] == '\0');
}

int	test_bzero(void)
{
	char	buffer[5];

	buffer[0] = 'a';
	buffer[1] = 'b';
	buffer[2] = 'c';
	buffer[3] = 'd';
	buffer[4] = 'e';
	ft_bzero(buffer, 5);
	return (buffer[0] == 0 && buffer[4] == 0);
}

int	test_memcpy(void)
{
	char	src[] = "hello";
	char	dst[6];

	ft_memcpy(dst, src, 6);
	return (strcmp(dst, "hello") == 0);
}

int	test_memmove(void)
{
	char	buffer[] = "123456";

	ft_memmove(buffer + 2, buffer, 4);
	return (strcmp(buffer, "121234") == 0);
}

int	test_memchr(void)
{
	char	buffer[] = "hello";

	return (ft_memchr(buffer, 'e', 5) == buffer + 1
		&& ft_memchr(buffer, 'z', 5) == NULL
		&& ft_memchr(buffer, 'o', 2) == NULL);
}

int	test_memcmp(void)
{
	return (ft_memcmp("abc", "abc", 3) == 0
		&& ft_memcmp("abc", "abd", 3) < 0
		&& ft_memcmp("abd", "abc", 3) > 0
		&& ft_memcmp("abc", "abd", 0) == 0);
}
