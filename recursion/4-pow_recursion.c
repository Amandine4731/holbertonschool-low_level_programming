#include "main.h"
/**
 * _pow_recursion - to return the factorial of a given number
 * @x: a variable
 * @y: a variable
 * Return: recusive and -1 and 1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{

		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (_pow_recursion(x, y - 1) * x);
	}
}
