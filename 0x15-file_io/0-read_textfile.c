#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - read a certain size and prints to std output
 * @filename: file to read from
 * @letters: size to read
 * Return: actual size read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	FILE *fp = fopen(filename, "r");

	if (fp == NULL)
	{
		return (0);
	}

	char buffer[letters];

	size_t bytes_read = fread(buffer, 1, letters, fp);

	if (bytes_read == 0)
	{
		return (0);
	}

	int ret = write(STDOUT_FILENO, buffer, bytes_read);

	if (ret != bytes_read)
	{
		return (0);
	}
	return (bytes_read);
}
