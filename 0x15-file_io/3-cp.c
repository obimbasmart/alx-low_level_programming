#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - copy the content of file1 to file2
 * @argc: number of argument passed to program
 * @argv: array of argument passed to program
 *
 * Return: 0 on success or exit with status code
 */
int main(int argc, char *argv[])
{
	char *file_from_name, *file_to_name, *buffer;
	ssize_t read_desc;
	int file_from_desc, file_to_desc, close_from_desc, close_to_desc;

	if (argc != 3)
		print_to_stderr("Usage: cp file_from file_to", NULL, 97);

	file_from_name = argv[1];
	file_to_name = argv[2];
	file_from_desc = open(file_from_name, O_RDONLY, BUFFER_SIZE);

	if (file_from_desc < 0)
		print_to_stderr("Error: Can't read from file", file_from_name, 98);

	buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (!buffer) /* malloc fails */
		exit (99);

	file_to_desc = open(file_to_name, O_WRONLY | O_CREAT | O_TRUNC, 00664);

	if (file_to_desc < 0)
		print_to_stderr("Error: Can't write to", file_to_name, 99);

	read_desc = read(file_from_desc, buffer, BUFFER_SIZE);
	if (read_desc < 0)
		print_to_stderr("Error: Can't read from file", file_from_name, 98);

	copy_content(file_from_desc, file_to_desc, read_desc, buffer, file_to_name);

	close_from_desc = close(file_from_desc);
	close_to_desc = close(file_to_desc);
	free(buffer);

	if (close_from_desc < 0)
		print_to_stderr_int("Error: Can't close fd", file_from_desc, 100);

	if (close_to_desc < 0)
		print_to_stderr_int("Error: Can't close fd", file_to_desc, 100);

	return (0);
}

/**
 * copy_content - copy the content of file1 to file2
 * @file_to_desc: destination file file descriptor
 * @file_from_desc: source file file descriptor
 * @buffer: buffer for copying content
 * @file_to_name: name of source file
 * @read_desc: return val from initial read on file_from
 *
 * Return: void - nothing
 */
void copy_content(int file_from_desc, int file_to_desc,
		  int read_desc, char *buffer, char *file_to_name)
{
	ssize_t write_desc;

	while (read_desc)
	{
		write_desc = write(file_to_desc, buffer, read_desc);
		if (write_desc < 0)
			print_to_stderr("Error: Can't write to %s\n", file_to_name, 99);

		read_desc = read(file_from_desc, buffer, BUFFER_SIZE);
	}
}

/**
 * print_to_stderr - print formatted output to standard error
 * @msg: error message
 * @file_name: name of file
 * @exit_code: exit status code
 *
 * Return: nothing
 */
void print_to_stderr(char *msg, char *file_name, unsigned int exit_code)
{
	file_name ? dprintf(STDERR_FILENO, "%s %s\n", msg, file_name)
		  : dprintf(STDERR_FILENO, "%s\n", msg);
	exit(exit_code);
}

/**
 * print_to_stderr_int - print formatted output to standard error
 * @msg: error message
 * @fd: integer value of file descriptor
 * @exit_code: exit status code
 *
 * Return: nothing
 */
void print_to_stderr_int(char *msg, int fd, unsigned int exit_code)
{
	dprintf(STDERR_FILENO, "%s %d\n", msg, fd);
	exit(exit_code);
}
