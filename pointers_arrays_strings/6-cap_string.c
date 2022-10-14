#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @a: the pointer
 * Return: to the destination
 */
char *cap_string(char *a)
{
	int i = 0;
	int n = 0;

	while (i < n && a[i] != ' ')
	{
		i++;
		if (i == 0)
		{
			if (a[i] >= 'a' && a[i] <= 'z')
			{
				a[i] = a[i] - 32;
			}
}
			else
			{

			}
	}
	return (a);
}
