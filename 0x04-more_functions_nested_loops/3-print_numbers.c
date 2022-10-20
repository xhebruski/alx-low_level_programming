#include "main.h"

/**
 * print_numbers - print 1 to 9
 * return: 0
 */
void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
		_putchar(a++ + '0');

	_putchar('\n');
}
