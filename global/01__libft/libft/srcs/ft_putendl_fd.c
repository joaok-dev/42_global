#include "../includes/libft.h"

/**
 * Outputs a string followed by a newline to the given file descriptor.
 *
 * @param s  The string to output
 * @param fd The file descriptor to write to
 */

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
