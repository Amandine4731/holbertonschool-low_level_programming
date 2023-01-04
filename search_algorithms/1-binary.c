#include "search_algos.h"
/**
 * binary_search - to search for a value in sorted array with Binary search
 * @array: pointer to array
 * @size: size of array
 * @value: value of the array
 * Return: an int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first = 0, last = (size - 1), i = 0;

	if (size <= 0 && array == NULL)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < last; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[last]);
	while (first < last)
	{
		size_t middle = (first + (last - first) / 2);

		if (value == array[middle])
		{
			return (middle);
		}
		else if (value < array[middle])
		{
			last = middle - 1;
			printf("Searching in array: ");
			for (i = first; i < last; i++)
				printf("%d, ", array[i]);
			printf("%d\n", array[last]);
			continue;
		}
		else
		{
			first = middle + 1;
			printf("Searching in array: ");
			for (i = first; i < last; i++)
				printf("%d, ", array[i]);
			printf("%d\n", array[last]);
			continue;
		}
	}
	return (-1);
}
