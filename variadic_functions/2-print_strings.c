#include "variadic_functions.h"
/**
 * print_strings - to print a string
 * @separator: a pointer const char
 * @n: a variable const unsigned int
 * Return: a string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *string;
	va_list args;
	
	if (separator == NULL)
		{
			separator = "";
		}
	
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else if (i == n - 1)
		{
			printf("%s", string);
		}
		else
		{
			printf("%s%s", string, separator);
		}
	}
	va_end(args);
	printf("\n");
}
