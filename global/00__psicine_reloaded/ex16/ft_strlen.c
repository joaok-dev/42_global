int	ft_strlen(char *str)
{
	char	*s;

	s = str;
	while (*s)
		s++;
	return (s - str);
}
