#include "main.h"
/**
* print_last_digit - print the last digit
* @n: the value to check
* Return: Always 0 (Success).
*/
int print_last_digit(int n)
{
int lastDigit = 0;
/* I initialize lastDigit */
int l;

if (n >= 0)
{
lastDigit = n % 10;
/* I take the last digit of the value */
l = lastDigit;
/* capture the state of between conversion */
lastDigit = lastDigit + '0';
/* I convert the last digit to ASCII */
_putchar(lastDigit);
/* print the last digit */
return (l);
/* return in real number (beacause in the example, Julien convert in ASKII */
}
else
{
lastDigit = ((n % -10) * -1);
/* for the negatives values (n % -10 = -8; * -1 = 8) */
l = lastDigit;
lastDigit = lastDigit + '0';
_putchar(lastDigit);
return (l);
}
}
