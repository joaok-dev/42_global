#include "../includes/libft.h"

/**
 * Converts a string to an integer.
 *
 * @param str The string to convert
 *
 * @return The converted integer value
 */

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		if (result * sign > 2147483647)
			return (-1);
		if (result * sign < -2147483648)
			return (0);
		str++;
	}
	return ((int)(result * sign));
}
