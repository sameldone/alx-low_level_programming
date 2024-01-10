#include <unistd.h>

/**
 * _putchar - Writes a single character to stdout.
 * @c: The character to write.
 *
 * Return: 1 on success, -1 on error (errno is set appropriately).
 */
int _putchar(char c)
{
    /*Directly return the result of write() for clarity and efficiency*/
	return (write(STDOUT_FILENO, &c, 1));
}

