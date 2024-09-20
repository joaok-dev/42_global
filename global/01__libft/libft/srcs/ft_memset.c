#include "../includes/libft.h"

/**
 * Fills the first len bytes of the memory area pointed to by b with the
 * constant byte c.
 *
 * @param b   Pointer to the memory area to be filled
 * @param c   The byte to fill the memory with
 * @param len Number of bytes to be filled
 *
 * @return A pointer to the memory area b
 */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *)b;
	value = (unsigned char)c;
	while (len--)
		*ptr++ = value;
	return (b);
}
