#include "../includes/libft.h"

/**
 * Converts a lowercase letter to uppercase.
 *
 * @param c The character to convert
 *
 * @return The uppercase equivalent if c is a lowercase letter,
	c unchanged otherwise
 */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
