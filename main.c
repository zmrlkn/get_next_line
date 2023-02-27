#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd, fd1;

	fd = open("a.txt", O_RDONLY);
	fd1 = open("b.txt", O_RDONLY);

	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd1));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd1));
}
