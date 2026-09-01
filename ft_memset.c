#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			index;

	p = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		p[index] = (unsigned char)c;
		index++;
	}
	return (s);
}
/*
#include <stdio.h>
int	main()
{
	int index;
	index = 0;
	char *str[20];
	char *result;
	result = ft_memset(str, 69,15);
	while (result[index])
	{
		index++;
		printf("%d%c\n", index, result[index]);
	}
	printf("\n");
	return (0);
}
*/