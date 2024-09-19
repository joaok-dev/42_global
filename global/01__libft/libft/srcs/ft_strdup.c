#include "../includes/libft.h"

/**
 * Duplicates the string s1.
 *
 * @param s1 The string to duplicate
 *
 * @return A pointer to the new string, or NULL if the allocation fails
 */

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s1) + 1;
	dup = (char *)malloc(len);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s1, len);
	return (NULL);
}
