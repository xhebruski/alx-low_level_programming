#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* sum_them_all - sum all args
* @n: number of args
* Return: Sum of Args
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	int i = 0, int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	sum += va_arg(ap, unsigned int);

	va_end(ap);
	return (sum);
}
