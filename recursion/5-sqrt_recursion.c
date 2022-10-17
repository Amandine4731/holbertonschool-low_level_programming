#include "main.h"
/**
 * _sqrt_recursion - to return the natural square root of a number
 * @n: a variable
 * Return: recusive and -1 and 1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(n - 1) * (1 / 2));
	}
}
