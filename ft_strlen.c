#include <stddef.h>
size_t ft_strlen(const char *s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}