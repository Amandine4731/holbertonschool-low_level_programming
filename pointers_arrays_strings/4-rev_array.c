#include "main.h"
/**
  * reverse_array - reverse the content of an array of integers
  * @a: a pointer
  * @n: number of elements
  */
void reverse_array(int *a, int n)
{
	int i = 0;
	int c = 0;
	int tmp = 0;

	while (a[i] < n)
	{
	i++;
	}
	for (i = n - 1; i >= c; i--)
	{
	tmp = a[c];
	a[c] = a[i];
	a[i] = tmp;
	c++;
	}
}
