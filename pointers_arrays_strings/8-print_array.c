#include "main.h"
/**
 * print_array - print n elements of an array of integers
 * @a: the pointer
 * @n: a variable
 */
void print_array(int *a, int n)
{	
	int i;

	for (i = 0; i < n; i++) 
	{
		if (i < a[i])
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
}
