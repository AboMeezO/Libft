#include <stddef.h>

int	ft_atoi(const char *str)
{
	size_t	index;
	int	sign;
	int	number;

	index = 0;
	sign = 1;
	number = 0;
	while (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13))
		index++;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		number = number * 10 + str[index] - '0';
		index++;
	}
	return (number * sign);
}