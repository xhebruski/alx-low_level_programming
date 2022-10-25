#include "main.h"

/**
  * print_rev - String in reverse
  * @s: string
  */
void print_rev(char *s)
{
	int y = 0;

	while (s[y] != '\0')
		y++;
	for (y = y - 1; y >= 0; y--)
		_putchar(s[y]);

	_putchar('\n');
}
