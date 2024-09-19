#include "../includes/libft.h"

/**
 * Compares two strings up to n characters.
 *
 * @param s1  First string to compare
 * @param s2  Second string to compare
 * @param len Maximum number of characters to compare
 *
 * @return 0 if strings are identical, otherwise difference between first non-matching characters
 */

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	while (len > 0 && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
		len--;
	}
	if (len == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
