#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @a: the pointer
 * Return: to the destination
 */
char *cap_string(char *a)
{
	int i = 0;
	int x = 0;

	char c[] = {',', ';', '.', '!', '?'
		, '"', '(', ')', '{', '}', ' ', '\n', '\t'};


	if (a[0] >= 'a' && a[0] <= 'z')
	{
		a[0] -= 32;
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		for (x = 0; c[x] != '\0'; x++)
		{
			if (a[i] == c[x] && a[i + 1] != '\0')
			{
				if (a[i + 1] >= 'a' && a[i + 1] != '\0')
				{
					a[i + 1] -= 32;
					break;
				}
			}
		}
	}
	return (a);
}
