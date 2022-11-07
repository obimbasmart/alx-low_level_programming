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
	char *file_from, *file_to, *buffer;
	ssize_t read_desc, write_desc;
	int file_from_desc, file_to_desc, close_from_desc, close_to_desc;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	file_from_desc = open(file_from, O_RDONLY, BUFFER_SIZE);
	if (file_from_desc < 0)
	{
		dprintf(2, "Can't read from %s\n", argv[1]);
		exit(98);
	}
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	file_to_desc = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (file_to_desc < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	read_desc = read(file_from_desc, buffer, BUFFER_SIZE);
	while (read_desc)
	{
		write_desc = write(file_to_desc, buffer, read_desc);
		if (write_desc < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		read_desc = read(file_from_desc, buffer, SIZE);
	}

	close_from_desc = close(file_from_desc);
	close_to_desc = close(file_to_desc);
	free(buffer);
	if (close_from_desc < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from_desc);
		exit(100);
	}
	if (close_to_desc < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to_desc);
		exit(100);
	}
	return (0);
}
