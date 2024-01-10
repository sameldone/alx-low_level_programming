#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to print in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;  /* Base case: empty string*/
	}
	_print_rev_recursion(s + 1);/* Recursively print the rest of the string*/
	_putchar(*s);/* Print the current character*/
}

