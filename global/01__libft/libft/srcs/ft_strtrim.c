#include "../includes/libft.h"

/**
 * Allocates and returns a copy of 's1' with the characters specified in 'set'
 * removed from the beginning and the end of the string.
 *
 * @param s1  The string to be trimmed
 * @param set The reference set of characters to trim
 *
 * @return The trimmed string, or NULL if the allocation fails
 */

char	*ft_strtrim(const char *s1, const char *set)
{
	const char	*start;
	const char	*end;

	if (!s1 || !set)
		return (NULL);
	start = s1;
	while (*start && ft_strchr(set, *start))
		start++;
	end = s1 + ft_strlen(s1);
	while (end > start && ft_strchr(set, *(end - 1)))
		end--;
	return (ft_substr(s1, start - s1, end - start));
}
