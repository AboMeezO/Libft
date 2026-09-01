#include <stdlib.h>

char	*ft_strdup(char *s)
{
	int		index;
	char	*dup;

	if (!s)
		return (NULL);
	index = 0;
	while (s[index])
		index++;
	dup = (char *)malloc(sizeof(char) * (index + 1));
	if (dup == NULL)
		return (NULL);
	index = 0;
	while (s[index])
	{
		dup[index] = s[index];
		index++;
	}
	dup[index] = '\0';
	return (dup);
}