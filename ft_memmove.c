#include <stddef.h>

void *memmove(void *dest, const void *src, size_t n)
{
    size_t index;
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (d < s)
    {
        index = 0;
        while (index < n)
        {
            d[index] = s[index];
            index++;
        }
    }
    else
    {
        index = n;
        while (index > 0)
        {
            index--;
            d[index] = s[index];
        }
    }
    return (dest);
}