#include "main.h"
/**
  * swap_int - swaps the values of two integers
  * @a: pointer a
  * @b: pointer b
  */
void swap_int(int *a, int *b)
{
	*a = 42;
	*b = 98;	

	temp = *a;
	*a = *b;
	*b = temp;
}
