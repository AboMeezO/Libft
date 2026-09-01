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