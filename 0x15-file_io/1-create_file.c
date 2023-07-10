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
	ssize_t len;
	int num;

	if (filename == NULL)
		return (-1);

	fd = open(filename,  O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == (-1))
		return (-1);

	if (text_content == NULL)
		text_content = "";

	len = strlen(text_content);

	num = write(fd, text_content, len);

	if (num == (-1))
		return (-1);
	close(fd);
	return (1);
}
