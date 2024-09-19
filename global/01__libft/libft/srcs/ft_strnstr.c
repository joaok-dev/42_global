#include "../includes/libft.h"

/**

	* Locates the first occurrence of the null-terminated string little in the string big,
 * where not more than len characters are searched.
 *
 * @param big    The string to be searched
 * @param little The string to search for
 * @param len    The maximum number of characters to search
 *

	* @return A pointer to the first character of the first occurrence of little in big,
 *         or NULL if little does not occur in big within len characters
 */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	if (*little == '\0')
		return ((char *)big);
	little_len = ft_strlen(little);
	while (*big && len >= little_len)
	{
		if (*big == *little && ft_strncmp(big, little, little_len) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
