#include "variadic_functions.h"
/**
 * print_numbers - to print numbers
 * @separator: a pointer const char
 * @n: a variable const unsigned int
 * Return: number and separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int number;
	va_list args;

	if (separator == NULL)
	{
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(args, unsigned int);

		if (i == n - 1)
		{
			printf("%d", number);
		}
		else
		{
			printf("%d%s", number, separator);
		}
	}
	va_end(args);
	printf("\n");
}
