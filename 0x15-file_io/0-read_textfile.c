#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read a text file and prints it to POSIX stdout
 * @filename: name of file
 * @letters: number of letter it should read and print
 *
 * Return: number of letters it could read and print | 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t num_of_letters_read;
	char *buffer;

	if (!filename) /* invalid finename */
		return (0);

	/* allocate buffer size using malloc */
	buffer = malloc(sizeof(char) * letters);

	if (!buffer) /* malloc failed */
		return (0);

	/* open the file in read_only mode */
	file_desc = open(filename,  O_RDONLY);

	if (file_desc < 0) /* error occrured */
		return (0);

	/* read the file */
	num_of_letters_read = read(file_desc, buffer, letters);

	close(file_desc);

	write(STDOUT_FILENO, buffer, num_of_letters_read);

	return (num_of_letters_read);
}

