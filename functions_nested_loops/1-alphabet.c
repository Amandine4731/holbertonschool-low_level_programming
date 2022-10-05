#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * Description: print the alphabet in lowercase
 * Return: Always 0.
 */
int print_alphabet(void);
/* prototype for the function */
int main(void)
/* main - check the code */
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');

	return (0);
}
