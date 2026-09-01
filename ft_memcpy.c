#include <stddef.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t	index;

	index = 0;
	unsigned char *d;
	d = (unsigned char *)dest;
	const unsigned char *s;
	s = (const unsigned char *)src;
	while (index < n)
	{
		d[index] = s[index];
		index++;
	}
	return (dest);
}
