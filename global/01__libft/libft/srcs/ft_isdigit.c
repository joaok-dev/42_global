#include "../includes/libft.h"

/**
 * Checks if the character is a digit.
 *
 * @param c The character to check
 *
 * @return Non-zero if the character is a digit, zero otherwise
 */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
