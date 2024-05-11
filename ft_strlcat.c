#include <stddef.h>
#include "libft.h"
size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t len_dst;
    size_t len_src;

    len_dst = ft_strlen(dst);
    len_src = ft_strlen(src);
    if (len_dst >= dstsize)
        return (len_src + dstsize);
    else
    {
        size_t i;
        i = 0;
        while (src[i] != '\0' && i < dstsize - len_dst - 1)
        {
            dst[len_dst + i] = src[i];
            i++;
        }
        dst[len_dst + i] = '\0';
        return (len_dst + len_src);
    }
}