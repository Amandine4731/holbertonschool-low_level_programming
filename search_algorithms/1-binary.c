#include "search_algos.h"
/**
 * binary_search - to search for a value in sorted array with Binary search algo
 * @array: pointer to array
 * @size: size of array
 * @value: value of the array
 * Return: an int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first = 0; /* first element of the array */
	size_t last = (size - 1); /* last element of the array */
	size_t i = 0;

	printf("Searching in array: ");
	for (i = 0; i < last; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[last]);
	while (first < last)
	{
		size_t middle = (first + (last - first) / 2); /* the middle of the array*/
		if (value == array[middle])
		{
			return (middle);
			break;
		}
		else if (value < array[middle])
		{
			last = middle - 1;
			printf("Searching in array: ");
			for (i = first; i < last; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[last]);
			continue;
		}
		else
		{
			first = middle + 1;
			printf("Searching in array: ");
			for (i = first; i < last; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[last]);
			continue;
		}
	}
	return (-1);
}
