#include "main.h"

/**
 * append_text_to_file - appending text at the endoffile
 * @filename: filename.
 * @text_content: content.
 * Return: 1 if the file exists -1 if the fails does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileprop;
	int numletter;
	int readwrite;

	if (!filename)
		return (-1);

	fileprop = open(filename, O_WRONLY | O_APPEND);

	if (fileprop == -1)
		return (-1);

	if (text_content)
	{
		for (numletter = 0; text_content[numletter]; numletter++)
			;

		readwrite = write(fileprop, text_content, numletter);

		if (readwrite == -1)
			return (-1);
	}

	close(fileprop);

	return (1);
}

