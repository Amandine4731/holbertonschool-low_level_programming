#include "main.h"
/**
 * print_array - print n elements of an array of integers
 * @a: the pointer
 * @n: elements
 */
void print_array(int *a, int n)
{	
	int i;
	int n = 0;

	for (i = 0; i < n; i++)
	{
		if (a[i] < n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
		printf("\n");
}
