#include "function_pointers.h"
/**
 * array_iterator - a function given as a parameter on each element of an array
 * @array: a variable int (array)
 * @size: a variable size_t (array's size)
 * @action: a funtion int
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (action == NULL || array == NULL)
	{
		exit(0);
	}
	else
	{
		for (i = 0; i < (int)size; i++)
		{
			(*action)(array[i]);

		}
	}
}
