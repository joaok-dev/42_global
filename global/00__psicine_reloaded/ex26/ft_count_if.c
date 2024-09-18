int	ft_count_if(char **tab, int (*f)(char *))
{
	int		count;
	char	**ptr;

	count = 0;
	ptr = tab;
	while (*ptr)
	{
		if (f(*ptr))
			count++;
		ptr++;
	}
	return (count);
}
