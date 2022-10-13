#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: a string
 * @s2: an other string
 * Return: 
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int x = 0;
	int result = 0;

	while (s1[i] != '\0' && s2[x] != '\0')
	{
		i++;
		x++;
	}
	if (s1[i] > s2[x])
	{
		result = (i + '0') - (x + '0');
		return (-result);
	}
	return (0);

}
