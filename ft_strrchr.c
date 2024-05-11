#include <stddef.h>
char *ft_strrchr(const char *s, int c)
{
    const char *last_occ;
    last_occ = NULL;
    while (*s != '\0')
    {
        if (*s == c)
            last_occ = s;
        s++;
    }
    if (c == '\0')
        return ((char *)s);
    return ((char *)last_occ);
}