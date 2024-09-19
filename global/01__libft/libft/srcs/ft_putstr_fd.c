#include "../includes/libft.h"

/**
 * Outputs a string to the given file descriptor.
 *
 * @param s  The string to output
 * @param fd The file descriptor to write to
 */

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
