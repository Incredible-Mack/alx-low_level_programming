#include "main.h"

/**
 * create_file -  file to be created
 * @filename: filename.
 * @text_content: file content.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fileprop;
	int numletter;
	int readwrite;

	if (!filename)
		return (-1);

	fileprop = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0700);

	if (fileprop == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numletter = 0; text_content[numletter]; numletter++)
		;

	readwrite = write(fileprop, text_content, numletter);

	if (readwrite == -1)
		return (-1);

	close(fileprop);

	return (1);
}

