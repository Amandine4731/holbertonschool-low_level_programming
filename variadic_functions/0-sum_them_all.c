#include "variadic_functions.h"
/**
 * sum_them_all - to return the sum of all its parameters
 * @n: a variable const unsigned int
 * Return: 0 if n == 0 , the resultat of the addition
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int result = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, unsigned int);
	}

	va_end(args);
	return (result);
}
