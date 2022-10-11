#include "main.h"
/**
 * print_array - print n elements of an array of integers
 * @a: the pointer
 * @n: a variable
 */
void print_array(int *a, int n)
{	
	int i = 0;
	int nbr;
	for (nbr = 0; nbr <= 9; nbr++)
	{
	for (i = nbr; i < n; i++)
	{
		printf(", %d", a[i]);
	}
}
}
