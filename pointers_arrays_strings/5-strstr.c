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
			if (haystack[x] == needle[i])
			{
				break;
			}
		}
		if (!needle[i])
		{
			break;
		}
	}
	return (needle);
}
