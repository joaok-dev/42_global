#include "../includes/libft.h"

/**
 * Calculates the length of a null-terminated string.
 *
 * @param s Pointer to the string
 *
 * @return Number of characters in the string, excluding null terminator
 */

size_t	ft_strlen(const char *s)
{
	const char	*str;

	str = s;
	while (*str)
		str++;
	return (str - s);
}
