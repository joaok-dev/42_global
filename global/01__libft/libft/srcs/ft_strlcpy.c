#include "../includes/libft.h"
#include <stdlib.h>

/**
 * Copies up to dstsize - 1 characters from src to dst,
 * null-terminating the result if dstsize is not 0.
 * Returns src length, allowing truncation check.
 *
 * @param dst      Destination string
 * @param src      Source string
 * @param dstsize  Size of destination buffer
 *
 * @return Total length of the string attempted to create (src length)
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*s;
	size_t		len;

	s = src;
	len = dstsize;
	if (len != 0)
	{
		while (--len != 0 && *s != '\0')
		{
			*dst = *s;
			dst++;
			s++;
		}
		*dst = '\0';
	}
	while (*s)
		s++;
	return (s - src);
}
