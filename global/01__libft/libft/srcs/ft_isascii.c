#include "../includes/libft.h"

/**
 * Checks if the character is a 7-bit ASCII character.
 *
 * @param c The character to check
 *
 * @return Non-zero if the character is ASCII, zero otherwise
 */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
