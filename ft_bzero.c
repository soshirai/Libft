#include <stddef.h>
void ft_bzero(void *s, size_t n)
{
    unsigned char *p;
    size_t i;

    p = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        p[i] = 0;
        i++;
    }
}