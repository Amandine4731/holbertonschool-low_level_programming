#include <ctype.h>
#include <locale.h>
/**
* _islower - shall test whether c is a character of class lower
* @c: The character to check
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _islower(int c)
{
		return (write(1, &c, 1));
}
