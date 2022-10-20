#include "main.h"

/**
 * _isdigit - Check for digits
 * @c: the character to check for
 * Return: 1 for success, else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
