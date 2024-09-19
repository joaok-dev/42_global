#include "../includes/libft.h"

/**
 * Converts an integer to a string.
 *
 * @param n	The integer to convert
 *
 * @return Newly allocated string representing the integer, or NULL
 * if allocation fails
 */

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	num = n;
	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	*(str + len) = '\0';
	if (num == 0)
		*str = '0';
	if (num < 0)
	{
		*str = '-';
		num = -num;
	}
	while (num != 0)
	{
		*(str + --len) = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
