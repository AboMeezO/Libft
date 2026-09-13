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
