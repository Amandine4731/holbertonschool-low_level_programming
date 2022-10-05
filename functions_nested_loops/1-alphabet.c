#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * Description: print the alphabet in lowercase
 * Return: Always 0.
 */
void print_alphabet(void);
/* prototype for the function */
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');

	return (0);
}
