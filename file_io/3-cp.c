#include "main.h"
/**
 * main - copy the content of a file to another file
 * @argc: arguments counter
 * @argv[]: arguments
 * Return: copy or error
 */
int main(int argc, char *argv[])
{
	int fdsource = 0, fddest = 0, size = 1, wr = 0;
	char *buffer[1024];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]);
	exit(97);
	}
	fdsource = open(argv[1], O_RDONLY);
	if (fdsource == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	fddest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while (size > 0)
	{
		size = read(fdsource, buffer, 1024);
		if (size == -1)
		{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
		}
		wr = write(fddest, buffer, size);
		if (wr == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
		}
	}
	if (close(fdsource) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdsource);
		exit(100);
	}
	if (close(fddest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fddest);
		exit(100);
	}
	return (0);
}
