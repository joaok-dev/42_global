#include "../includes/libft.h"

/**
 * Compares the first n bytes of the memory areas s1 and s2.
 *
 * @param s1 Pointer to the first memory area
 * @param s2 Pointer to the second memory area
 * @param n  Number of bytes to compare
 *
 * @return An integer less than, equal to,
	or greater than zero if the first n bytes of s1 is found,
 *         respectively, to be less than, to match,
	or be greater than the first n bytes of s2.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
