#include "main.h"

/**
  * print_array - n element of arrays
  * @a: int 1
  * @n: int 2
  * Return: printed arrays
  */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf("\n");
}
