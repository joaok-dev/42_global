#include "../includes/libft.h"

/**
 * Checks if the character is alphanumeric.
 *
 * @param c The character to check
 *
 * @return Non-zero if the character is alphanumeric, zero otherwise
 */

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
