#include "function_pointers.h"
/**
 * int_index - to search for an integer
 * @array: a variable int (array)
 * @size: a variable int
 * @cmp: a funtion int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || cmp == 0)
	{
		return(-1);
	}
}
