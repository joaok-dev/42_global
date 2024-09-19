#include "../includes/libft.h"

/**
 * Allocates and returns a substring from the string 's'.
 * The substring begins at index 'start' and is of maximum size 'len'.
 *
 * @param s     The string from which to create the substring
 * @param start The start index of the substring in the string 's'
 * @param len   The maximum length of the substring
 *
 * @return The substring, or NULL if the allocation fails
 */

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*substr;
	char		*substr_ptr;
	const char	*s_ptr;
	size_t		s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	s_ptr = s + start;
	substr_ptr = substr;
	while (len-- && *s_ptr)
		*substr_ptr++ = *s_ptr++;
	*substr_ptr = '\0';
	return (substr);
}
