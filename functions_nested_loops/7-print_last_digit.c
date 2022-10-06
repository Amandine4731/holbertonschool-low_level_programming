#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: the value to check
 * return: Always 0.
 **/
int print_last_digit(int n)
{
int lastDigit = 0;
lastDigit = n % 10;
lastDigit = lastDigit + '0';
_putchar(lastDigit);
return (lastDigit);
}
