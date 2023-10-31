#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The string to be added to the end of the file
 *
 * Return: On failure or if filename is NULL, return -1
 * If the file does not exist or the user lacks write permissions, return -1
 * On success, return 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fw, flen = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[flen])
			flen++;
	}

	fo = open(filename, O_WRONLY | O_APPEND);
	fw = write(fo, text_content, flen);

	if (fo == -1 || fw == -1)
		return (-1);

	close(fo);

	return (1);
}
