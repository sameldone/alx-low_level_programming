#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string recursively.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);/* Base case: empty string has length 0*/
	}
	return (1 + _strlen_recursion(s + 1));/*Recursively count characters*/
}

