#include "main.h"
/**
 * _lol - to return the natural square root of a number
 * @counter: a variable counter
 * @number: a variable n
 * Return: power recusive
 */
int _lol(int counter, int number)
{
	if (counter < number)
	{
		if (number % counter == 0)
		{
			return (0);
		}
		else
		{
			return (_lol(counter + 1, number));
		}
	}
	return (1);
}
/**
 * is_prime_number - prime numbers
 * @n: a variable
 * Return: 0 if is not a prime number, 1 if is
 */
int is_prime_number(int n)
{
	if (n == 1 || n <= 0)
	{
		return (0);
	}
	return (_lol(2, n));
}
