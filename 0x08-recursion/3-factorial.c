#include <main.h>

/**
 * factorial - calculates the factorial of a given number.
 * @n: given number
 * Return: factorial
 **/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);/* Error for negative input*/
	}
	else if (n == 0)
	{
		return (1);/*Base case: factorial of 0 is 1*/
	}
	else
	{
		return (n * factorial(n - 1));/* Recursive calculation*/
	}
}
