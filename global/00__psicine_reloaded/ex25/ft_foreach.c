void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	*end;

	end = tab + length;
	while (tab < end)
	{
		f(*tab);
		tab++;
	}
}
