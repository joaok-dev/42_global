#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	char	**args;
	char	*arg;

	args = argv + 1;
	while (*args)
	{
		arg = *args;
		while (*arg)
			ft_putchar(*arg++);
		if (*(args + 1))
			ft_putchar(' ');
		args++;
	}
	ft_putchar('\n');
	return (0);
}
