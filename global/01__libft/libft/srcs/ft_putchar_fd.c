#include "../includes/libft.h"

/**
 * Outputs a character to the given file descriptor.
 *
 * @param c  The character to output
 * @param fd The file descriptor to write to
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
