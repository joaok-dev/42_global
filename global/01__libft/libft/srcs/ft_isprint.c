#include "../includes/libft.h"

/**
 * Checks if the character is printable (including space).
 *
 * @param c The character to check
 *
 * @return Non-zero if the character is printable, zero otherwise
 */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
