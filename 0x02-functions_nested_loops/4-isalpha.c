#include "main.h"

/**
  * _isalpha - check for alphabetic character
  * @c: the charater to check for
  * Return: 1 if alphabetic, 0 if otherwise
  */

int _isalpha(int c)
{
	for (c => 'a' || 'A' && c <= 'a' || 'Z')
		return (1);
	else
		return (0);
}
