#include "main.h"
/**
 * create_file - create a function that creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: a new file
 */
int create_file(const char *filename, char *text_content)
{
	int fd;/* file descriptor */

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!filename || fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
