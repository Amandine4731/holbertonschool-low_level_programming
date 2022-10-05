#include <stdlib>
#include <stdio.h>
#include "main.h"

/**
 * Description: print the alphabet in lowercase
 * Return: Always 0.
 */
int main(void)
/* main - check the code */
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');

	return (0);
}
