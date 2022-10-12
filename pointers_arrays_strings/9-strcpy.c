#include "main.h"
/**
  * _strcpy - copy a string pointed
  * @dest: the receiver
  * @src: the giver
  * Return: 
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	
	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
