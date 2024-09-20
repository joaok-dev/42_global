#include "../includes/libft.h"

/**
 * Erases the data in the n bytes of the memory starting at the locationpointed
 * pointed to by s,by writing zeros (bytes containing '\0') to that area.
 *
 * @param s Pointer to the memory area to be erased
 * @param n Number of bytes to be erased
 */

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
