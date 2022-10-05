#include "main.h"
/**
*_isalpha - checks for an alphabetic character
*@c: the character to check
* Return: 1 if c is an alphabetic character, 0 otherwise
*/
int _isalpha(int c)
/* prototype for the function */
{
	if (c < 'z' && c > 'a')
	{
	return (1);
	}
	else if (c < 'Z' && c > 'A')
	{
	return (1);
	}
	else
	{
	return (0);
}
}
