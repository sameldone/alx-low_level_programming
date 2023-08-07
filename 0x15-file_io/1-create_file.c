#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */

int create_file(const char *filename, char *text_content) 
{
	if (filename == NULL) 
	{
		return (-1);
	}
	
	if (text_content == NULL) 
	{
    /* Create an empty file.*/
		int fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
		if (fd == -1) 
		{
			return (-1);
		}
		close(fd);
		return (1);
	}

  /*Create a file and write the text content to it.*/
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	int bytes_written = write(fd, text_content, strlen(text_content));
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
