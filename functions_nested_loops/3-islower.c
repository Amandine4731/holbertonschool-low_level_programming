#include "main.h"
/**
  * @c: The character to print 
  * _islower - Entry point
  * Return: Always 0.
  */
int _islower(int c)
/* prototype for the function */
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	
	}
}
