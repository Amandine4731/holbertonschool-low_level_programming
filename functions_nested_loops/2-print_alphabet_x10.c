#include "main.h"

/**
* print_alphabet_x10 - Entry point
* Return: Always 0.
*/
void print_alphabet_x10(void)
/* prototype for the function */
{
int i;
char ch;

for (i = 0; i < 10; i++)
{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	  putchar('\n');
}
}
