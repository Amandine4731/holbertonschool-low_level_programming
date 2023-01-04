#include "search_algos.h"
/**
 * linear_search - to search a value in an array with linear search algorithm
 * @array: pointer to array
 * @value: values in array
 * @size: size of array
 * Return: an int
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0; /* index of the array */

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
