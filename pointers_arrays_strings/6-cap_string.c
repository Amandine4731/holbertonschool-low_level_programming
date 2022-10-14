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

	for (i = 0; a[i] != '\0'; i++)
	{
		for (x = 0; c[x] != '\0'; x++)
		{
			if (a[i] == c[x] && a[i + 1] != '\0')
			{
				a[i + 1] -= 32;
				break;
			}
		}
	}
	return (a);
}
