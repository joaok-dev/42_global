#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dst;
	char	*d;
	char	*s;

	s = src;
	while (*s)
		s++;
	dst = (char *)malloc(sizeof(char) * (s - src + 1));
	if (dst == NULL)
		return (NULL);
	d = dst;
	s = src;
	while (*s)
		*d++ = *s++;
	*d = '\0';
	return (dst);
}
