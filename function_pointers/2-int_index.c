#include "function_pointers.h"
/**
 * int_index - to search for an integer
 * @array: a variable int (array)
 * @size: a variable int
 * @cmp: a funtion int
 * Return: -1 , i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 && array == NULL && cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}
	return (0);
}
