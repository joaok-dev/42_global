#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	*ptr;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (range == NULL)
		return (NULL);
	ptr = range;
	while (min < max)
	{
		*ptr = min;
		ptr++;
		min++;
	}
	return (range);
}
