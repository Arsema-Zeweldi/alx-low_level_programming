#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: text inside the file
 * Return : int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, c, stat;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	for (c = 0; text_content[c] != '\0'; c++)
		;
	stat = write(fd, text_content, c);
	if (stat == -1)
		return (-1);


	close(fd);
	return (1);
}
