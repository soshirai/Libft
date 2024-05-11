#include <stddef.h>
#include <stdlib.h>
void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *p_dst;
    const unsigned char *p_src;
    unsigned char *tmp;
    size_t i;

    p_dst = (unsigned char *)dst;
    p_src = (const unsigned char *)src;
    tmp = (unsigned char *)malloc(sizeof(unsigned char) * len);
    if (tmp == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        tmp[i] = p_src[i];
        i++;
    }
    i = 0;
    while (i < len)
    {
        p_dst[i] = tmp[i];
        i++;
    }
    free(tmp);
    return (dst);
}