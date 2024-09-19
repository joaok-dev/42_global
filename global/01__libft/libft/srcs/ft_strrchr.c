#include "../includes/libft.h"

/**

	* Locates the last occurrence of c (converted to a char) in the string pointed to by s.
 * The terminating null character is considered part of the string.
 *
 * @param s The string to search
 * @param c The character to find
 *
 * @return A pointer to the located character, or NULL if not found
 */

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}
