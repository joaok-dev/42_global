#include "../includes/libft.h"

/**
 * Concatenates strings with size limitation.
 * Appends src to dst, ensuring null-termination within dstsize.
 *
 * @param dst		Destination string
 * @param src		Source string to append
 * @param dstsize	Size of destination buffer
 *
 * @return Total length of dst and src combined
 */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const char	*s;
	char		*d;
	size_t		n;
	size_t		dlen;

	d = dst;
	s = src;
	n = dstsize;
	while (n-- && *d)
		d++;
	dlen = d - dst;
	n = dstsize - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
