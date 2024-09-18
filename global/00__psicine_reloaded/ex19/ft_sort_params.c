#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_parambs(int argc, char **argv)
{
	char	**p1;
	char	**p2;

	p1 = argv + 1;
	while (p1 < argv + argc - 1)
	{
		p2 = argv + 1;
		while (p2 < argv + argc - (p1 - argv))
		{
			if (ft_strcmp(*p2, *(p2 + 1)) > 0)
				ft_swap(p2, p2 + 1);
			p2++;
		}
	}
}

int	main(int argc, char **argv)
{
	char	**p;

	if (argc > 1)
	{
		ft_sort_parambs(argc, argv);
		p = argv + 1;
		while (p < argv + argc)
		{
			ft_putstr(*p);
			ft_putchar('\n');
			p++;
		}
	}
}
