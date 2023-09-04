#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file.
 * @text_content: added content.
 *
 * Return: 1 if the file exists.
 *	-1 if the file does not exist or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fopened, nletters, rwr;

	if (!filename)
		return (-1);

	fopened = open(filename, O_WRONLY | O_APPEND);

	if (fopened == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fopened, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fopened);

	return (1);
}
