#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @a: array of integers
  * @n: number of integers
  * Return: 0
  */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
