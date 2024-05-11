#include <stddef.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *p;
    size_t i;

    p = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (*p == c)
            return ((void *)p);
        p++;
    }
    return (NULL);
}