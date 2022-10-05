#include "main.h"
/**
* print_sign - check the sign of a number
* @n: the character to check
* Return: 1 if c is lowercase, 0 otherwise
*/
int print_sign(int n)
/* prototype for the function */
{
		if (n > 0)
		{
		return (1);
		_putchar('+');
		}
			else if (n == 0)
		{
			return (0);
			_putchar('0');
		}
			else if (n < 0)
		{
			return (-1);
			_putchar('-');
		}
}
