#include "main.h"
/**
*_isalpha - checks for an alphabetic character
*@c: the character to check
* Return: 1 if c is lowercase, 0 otherwise
*/
int _isalpha(int c)
/* prototype for the function */
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
