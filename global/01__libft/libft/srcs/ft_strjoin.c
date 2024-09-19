#include "../includes/libft.h"

/**
 * Allocates and returns a new string,
	which is the result of the concatenation of 's1' and 's2'.
 *
 * @param s1 The prefix string
 * @param s2 The suffix string
 *
 * @return The new string, or NULL if the allocation fails
 */

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*result;
	char	*result_ptr;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result_ptr = result;
	while (*s1)
		*result_ptr++ = *s1++;
	while (*s2)
		*result_ptr++ = *s2++;
	*result_ptr = '\0';
	return (result);
}
