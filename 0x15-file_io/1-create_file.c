#include "main.h"
#include <string.h>

/**
 * create_file - function creates a file
 * @filename: name/path to file
 * @text_content: string to write to the file
 *
 * Return: 1 on success. -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, text_content_length;

	text_content_length = text_content ? strlen(text_content) : 0;
	if (!filename)
	{
		return (-1);
	}
	/*open file on read and write mode */
	file_desc = open(filename, O_RDWR | O_CREAT, 00600);

	if (file_desc < 0)
	{
		return (-1);
	}
	/* write to file */
	if (text_content)
	{
		write(file_desc, text_content, text_content_length);
	}

	/* close the file */
	close(file_desc);

	return (1);
}
