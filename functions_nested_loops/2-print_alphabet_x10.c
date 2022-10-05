#include "main.h"

/**
* print_alphabet_x10 - Entry point
* Return: Always 0.
*/
void print_alphabet_x10(void)
/* prototype for the function */
{
	char ch = 'a';
	int i = 0;
	
	while (i <= 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	i++;
}
	_putchar('\n');
}

