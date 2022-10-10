#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the character to check
 */
void print_rev(char *s)
{
	printf("%s\n", s);
	printf("%s\n", strrev(s));
}
