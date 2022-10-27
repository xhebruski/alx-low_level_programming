#include "main.h"

/**
  * string_toupper - convert string to uppercase
  * @n: String
  * Return: 0
  */
char *string_toupper(char n*)
{
	int i = 0;

	while (i != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
