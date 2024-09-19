#include "../includes/libft.h"

/**
 * Copies no more than n bytes from src to dst, stopping when c is found.
 *
 * @param dst	Pointer to the destination memory area
 * @param src	Pointer to the source memory area
 * @param c		Character to search for
 * @param n		Maximum number of bytes to copy
 *
 * @return Pointer to the byte after c in dst, or NULL if c was not found
 */

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		uc;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	uc = (unsigned char)c;
	while (n--)
	{
		*d = *s;
		if (*s == uc)
			return (d + 1);
		d++;
		s++;
	}
	return (NULL);
}
