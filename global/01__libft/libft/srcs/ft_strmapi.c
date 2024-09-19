#include "../includes/libft.h"
#include <stdlib.h>

/**
 * Applies the function 'f' to each character of the string 's' to create
 * a new string resulting from successive applications of 'f'.
 *
 * @param s The string on which to iterate
 * @param f The function to apply to each character
 *
 * @return The string created from the successive applications of 'f',
 *         or NULL if the allocation fails
 */

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*result;
	char			*result_ptr;
	unsigned int	i;
	const char		*s_ptr;

	if (!s || !f)
		return (NULL);
	result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result_ptr = result;
	s_ptr = s;
	i = 0;
	while (*s_ptr)
	{
		*result_ptr++ = f(i++, *s_ptr);
		s_ptr++;
	}
	*result_ptr = '\0';
	return (result);
}
