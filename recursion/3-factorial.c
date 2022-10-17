#include "main.h"
/**
 * factorial - to return the factorial of a given number
 * @n: a pointer char
 * Return: recusive and 0
 */
int factorial(int n)
{
	if (n < 0)
	{

		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
