#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	size_t	index;
	void	*ptr;
	size_t	total_size;

	if (n != 0 && size > (size_t)-1 / n)
		return (NULL);
	total_size = n * size;
	ptr = malloc(total_size);
	if (ptr)
	{
		for (index = 0; index < total_size; index++)
			((char *)ptr)[index] = 0;
	}
	return (ptr);
}
