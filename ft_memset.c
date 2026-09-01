#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	size_t i;

	for (i = 0; i < n; i++)
		p[i] = (unsigned char)c;
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