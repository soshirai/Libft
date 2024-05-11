#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *p_dst;
	const unsigned char *p_src;
	size_t i;

	p_dst = (unsigned char *restrict)dst;
	p_src = (const unsigned char *restrict)src;
	i = 0;
	while (i < n)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return (dst);
}