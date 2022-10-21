#include "main.h"
/**
 * _power - to return the natural square root of a number
 * @counter: variable counter
 * @number: variable n
 * Return: power recusive
 */
int _power(int counter, int number)
{
	if (counter * counter == number)
	{
		return (counter);
	}
	else if (counter * counter < number)
	{
		return (_power(counter + 1, number));
	}
	return (-1);
}
/**
 * _sqrt_recursion - to return the natural square root of a number
 * @n: a variable
 * Return: recusive and -1 and the square
 */
int _sqrt_recursion(int n)
{
	return (_power(1, n));
}
