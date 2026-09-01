#include <stddef.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t				index;
	unsigned char		*d;
	const unsigned char	*s;

	index = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (index < n)
	{
		d[index] = s[index];
		index++;
	}
	return (dest);
}
