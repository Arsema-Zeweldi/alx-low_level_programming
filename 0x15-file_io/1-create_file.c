#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: text inside file
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t write_c;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (*(text_content + len) != '\0')
			len++;
		write_c = write(fd, text_content, len);
		if (write_c == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}

	}
	close(fd);
	return (1);
}
