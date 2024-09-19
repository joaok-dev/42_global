#include "../includes/libft.h"

/**
 * Locates the first occurrence of c in the first n bytes of s.
 *
 * @param s	Pointer to the memory area to search
 * @param c	Character to search for
 * @param n	Number of byter to search
 *
 * @return Pointer to the matching byte or NULL if not found
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		uc;

	p = (const unsigned char *)s;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*p == uc)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
