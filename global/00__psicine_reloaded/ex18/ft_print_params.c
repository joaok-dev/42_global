#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	char	**args;
	char	*arg;

	(void)argc;
	args = argv + 1;
	while (*args)
	{
		arg = *args;
		while (*arg)
			ft_putchar(*arg++);
		ft_putchar('\n');
		args++;
	}
	return (0);
}
