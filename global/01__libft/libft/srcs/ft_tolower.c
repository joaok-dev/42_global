#include "../includes/libft.h"

/**
 * Converts an uppercase letter to lowercase.
 *
 * @param c The character to convert
 *
 * @return The lowercase equivalent if c is an uppercase letter,
	c unchanged otherwise
 */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
