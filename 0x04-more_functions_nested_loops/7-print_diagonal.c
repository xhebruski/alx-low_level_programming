#include "main.h"

/**
  *print_diagonal - diagonal line
  *@n: number of times
  */
void print_diagonal(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('\');
	}

	_putchar('\n');
}
