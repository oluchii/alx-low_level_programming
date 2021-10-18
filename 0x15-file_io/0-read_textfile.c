#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed. if failed, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int d;
	ssize_t nd, nr;
	char *buf;

	if (!filename)
		return (0);

	d = open(filename, O_RDONLY);

	if (d == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nd = read(d, buf, letters);
	nr = write(STDOUT_FILENO, buf, nd);

	close(d);

	free(buf);

	return (nr);
}
