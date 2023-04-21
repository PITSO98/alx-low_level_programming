#include "main.h"
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. If fail, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t i, j;
	char *buf;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	i = read(file, buf, letters);
	j = write(STDOUT_FILENO, buf, i);

	close(file);

	free(buf);

	return (j);
}
