#include <main.h>
#include <stdio.h>
/**
 *  _pow_recursion - calculates value of x raised to the power of y
 * @x: given number
 * @y: exponent
 * Return: value of x raised to the power of y
 **/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);/* Error for negative exponents*/
	}
	else if (y == 0)
	{
		return (1);/* Base case: x^0 is 1*/
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));/*Recursive calculation*/
	}
}

