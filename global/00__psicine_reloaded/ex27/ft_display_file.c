#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 4096

int	ft_display_file(char *filename)
{
	int		fd;
	char	buffer[BUFFER_SIZE];
	ssize_t	bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)))
		write(1, buffer, bytes_read);
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(2, "file name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "too many args.\n", 20);
		return (1);
	}
	if (!ft_display_file(argv[1]))
	{
		write(2, "cannot read file. \n", 20);
		return (1);
	}
	return (0);
}
