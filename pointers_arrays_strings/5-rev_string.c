#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the character to check
 */
void rev_string(char *s)
{
	int c = 0;
	int i = 0;
	int tmp = 0;

	while (s[i] != '\0')
	{
	if (i > )
	{
		i--;
	}
	for (c = s - 1; c < i; c++)
	{
	tmp = s[c];
	s[c] = s[i];
	s[i] = tmp;
	}
	i--;
	}
}
