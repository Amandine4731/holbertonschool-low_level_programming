#include "main.h"
/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @a: the pointer
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
	if (a[i] >= 'a' && a[i] <= 'z')
	{
	a[i] = a[i] - 32;
	}
	i++;
	}
	return (a);
}
