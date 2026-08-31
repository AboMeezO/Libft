#include <stddef.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	outer_index;
	size_t	inner_index;

	outer_index = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[outer_index] && outer_index < len)
	{
		inner_index = 0;
		while (str[outer_index + inner_index]
			&& to_find[inner_index]
			&& outer_index + inner_index < len
			&& str[outer_index + inner_index] == to_find[inner_index])
            
			inner_index++;
		if (to_find[inner_index] == '\0')
			return ((char *)&str[outer_index]);
		outer_index++;
	}
	return (NULL);
}