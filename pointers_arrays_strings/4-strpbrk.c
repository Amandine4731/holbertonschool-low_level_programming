#include "main.h"
/**
  * _strpbrk - searche a string for any of a set of bytes
  * @s: 
  * @accept:
  * Return:
  */
char *_strpbrk(char *s, char *accept)
	{
	int i = 0;
	char c = 0;
	char * t = s;

	while (*s != c && *s != '\0')
	{
		s++;
		i++;
	}
	while (*t != c && *t != '\0')
	{
		t++;
		i++;
	}
	if (*s == c)
	{	
		return (t + i);
		return (accept + i);
	}
	if (
	else
	{
	return (0);
	}
}
