#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int d;
	int num_letters;
	int rwr;

	if (!filename)
		return (-1);

	d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (d == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;

	rwr = write(d, text_content, num_letters);

	if (rwr == -1)
		return (-1);

	close(d);

	return (1);
}
