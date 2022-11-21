#include "main.h"
/**
 * read_textfile - to read a text file and to print it to the POSIX standard o
 * @filename: pointer filename
 * @letters: number of letters it should read and print
 * Return: if filename is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;/* file descriptor, communication between files */
	char *p;

	p = malloc(sizeof(char) * letters);
	if (p == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (filename == NULL)
		return (0);

	read(fd, p, letters);

	close(fd);
	return (write(1, p, strlen(p)));
}
