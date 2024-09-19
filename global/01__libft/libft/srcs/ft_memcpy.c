#include "../includes/libft.h"

/**
 * Copies n bytes from memory area src to memory area dst.
 *
 * @param dst	Pointer to the destination memory area
 * @param src	Pointer to the source memory area
 * @param n		Number of bytes to copy
 *
 * @return Pointer to dst
 */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
