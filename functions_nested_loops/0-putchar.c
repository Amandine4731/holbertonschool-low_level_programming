#include "main.h"

/**
 * main - main Entry point
 * Description: print _putchar
 * Return: Always 0 (Success)
 */
int main(void)
/* main - main Entry point */
{
	char ch[] = "_putchar";

	int i = 0;
	while (ch[i] != 0)
	{
	_putchar(ch[i]);
	i++;
	}
	_putchar('\n');

	return (0);
}
