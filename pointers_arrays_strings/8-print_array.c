#include "main.h"
/**
 * print_array - print n elements of an array of integers
 * @a: the pointer
 * @n: a variable
 */
void print_array(int *a, int n)
{	
	int i;

	while (a[i] != '\0') /* count the number of characters in your string */
	{
		i++;
	}

	for (i = i - 1 ; i < n; i++)
	{
		printf(", %d", a[i]);
	}
}
