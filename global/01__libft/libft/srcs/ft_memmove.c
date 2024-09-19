#include "../includes/libft.h"

/**
 * Copies len bytes from src to dst. The memory areas may overlap.
 *
 * @param dst	Pointer to the destination memory area
 * @param src	Pointer to the source memory area
 * @param len	Number of bytes to copy
 *
 * @return Pointer to dst
 */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	return (dst);
}
