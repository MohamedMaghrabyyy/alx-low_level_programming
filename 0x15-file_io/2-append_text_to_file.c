#include "main.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: filename
 * @text_content: text to append to the file
 * Return: (1) on success and (-1) on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int apnd;
	ssize_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	len = strlen(text_content);
	apnd = write(fd, text_content, len);
	if (apnd == -1)
		return (-1);
	close(fd);
	return (1);
}
