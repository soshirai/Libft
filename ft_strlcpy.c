#include <stddef.h>
#include "libft.h"
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t src_len;
    size_t i;

    src_len = ft_strlen(src);
    if (dstsize == 0)
        return (src_len);
    i = 0;
    while (i < dstsize - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (src_len);
}