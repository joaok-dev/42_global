#include "../includes/libft.h"

/**
 * Checks if the character is alphabetic.
 *
 * @param c The character to check
 *
 * @return Non-zero if the character is alphabetic, zero otherwise
 */

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
