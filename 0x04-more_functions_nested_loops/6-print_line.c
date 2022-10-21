#include "main.h"

/**
 *print_line - draw a straight line
 *@n: the of times
 *Return: 0
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
