#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 *	the POSIX standard output.
 * @filename: filename.
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print.
 *	It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fopened;
	ssize_t num_rd, num_wr;
	char *buf;

	if (!filename)
		return (0);

	fopened = open(filename, O_RDONLY);

	if (fopened == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	num_rd = read(fopened, buf, letters);
	num_wr = write(STDOUT_FILENO, buf, num_rd);

	close(fopened);

	free(buf);

	return (num_wr);
}
