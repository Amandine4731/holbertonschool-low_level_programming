#include "main.h"
/**
 * print_array - print n elements of an array of integers
 * @a: the pointer
 * @n: a variable
 */
void print_array(int *a, int n)
{	
	int i = 2;

	for (i = 2; i < n; i++)
	printf(", %d", a[i]);
}
