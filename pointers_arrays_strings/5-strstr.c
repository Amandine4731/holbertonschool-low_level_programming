#include "main.h"
/**
 * _strstr - to locate a substring
 * @haystack:
 * @needle:
 * Return:
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int x = 0;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (needle[i] != haystack[x])
			{
				return (needle + i);
			}
		}
	}
	return (0);
}
