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

	while (*haystack != '\0' && needle[i] != '\0')
	{
		haystack++;
		i++;
	}
	if (haystack[i] == *needle)
	{
		return (needle);
	}
	else
	{
		return (0);
	}
}
