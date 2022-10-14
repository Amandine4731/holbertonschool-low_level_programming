#include "main.h"
/**
 * leet - to encode a string into 1337
 * 
 * Return: to the destination
 */
char *leet(char *a)
{
	int i, n;
	char b[] = {'a', 'A', 'e', 'E', 'o',
		'O', 't', 'T', 'l', 'L'};
	char c[] = {'4', '3', '0', '7', '1'};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (n = 0; n < 10; n++)
		{
			if (a[i] == b[i])
			{
				a[i] = c[n / 2];
				break;
			}

			return (a);
		}

	}
}
