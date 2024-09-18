int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	i = 1;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		if (i > nb / i)
			break ;
		i++;
	}
	return (0);
}
