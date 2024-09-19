#include "../includes/libft.h"
#include <stdlib.h>

/**
 * Allocates memory for an array of count elements of size bytes each and
 * returns a pointer to the allocated memory. The memory is set to zero.
 *
 * @param count Number of elements
 * @param size  Size of each element
 *
 * @return A pointer to the allocated memory, or NULL if the allocation fails
 */

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = count * size;
	if (count != 0 && total_size / count != size)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
