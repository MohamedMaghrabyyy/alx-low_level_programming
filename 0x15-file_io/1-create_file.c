#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: content to be written to created file
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = strlen(text_content);

	if (filename == NULL)
	{
		fd = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
		if (fd == (-1))
			return (-1);
		write(fd, text_content, len);
		return (1);
	}
	else
	{
		fd = open(filename, O_WRONLY | O_TRUNC);
		if (fd == (-1))
			return (-1);
		write(fd, text_content, len);
		return (1);
	}
}
