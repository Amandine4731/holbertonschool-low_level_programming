#include "main.h"
/**
  * most_numbers - print numbers 10 times
  */
void most_numbers(void)
{
	int i;
	int n = '0';

	for (i = 0; i < 10; i++)
	{
	for (n = '0'; n <= '9'; n++)
	{
	_putchar(n);
	}
	_putchar('\n');
	}
}
