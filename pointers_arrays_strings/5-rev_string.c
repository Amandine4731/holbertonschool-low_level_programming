#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the character to check
 */
void rev_string(char *s)
{
	int c = 0;
	int *t;

	while (*s != '\0')
	{
	s++;
	c++;
	}

	int tmp = *s;
	*s = *t;
	*t = tmp;
}
