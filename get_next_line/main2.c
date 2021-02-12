#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	char* line;
	int	check;
	int	fd;

	fd = open("test.txt", O_RDONLY);
	for (int i = 0; i < 10; i++)
    {
        printf("%zu\n", read(fd, &line, BUFFER_SIZE));
    }
	return (0);
}