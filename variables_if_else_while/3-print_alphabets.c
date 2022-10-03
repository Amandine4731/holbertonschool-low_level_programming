#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	
	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');
	
	char chh = 'A';
	for (chh = 'A'; chh <= 'Z'; chh++)
	putchar(chh);
	putchar('\n');
	return (0);
}
