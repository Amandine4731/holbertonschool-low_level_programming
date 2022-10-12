#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the character to check
 */
void rev_string(char *s)
{
	int i = 0;
	int c = 0;
	int tmp;

	while (s[i] != '\0')
	{
		s++;
		c++;
	}
	for (i = c - 1; i >= c; i--)
	{
		tmp = s[c];
		s[c] = s[i];
		s[i] = tmp;
		c--;

	}
}
