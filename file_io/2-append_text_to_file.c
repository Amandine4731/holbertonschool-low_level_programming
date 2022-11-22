#include "main.h"
/**
 * append_text_to_file - to append text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on succes and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;/* file descriptor */

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (!filename || fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
