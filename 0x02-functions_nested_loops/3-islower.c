#include "main.h"

/**
* _islower - check for lower character
* @c: the chararter to return
* Return: 1 for lowercase and 0 if otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
