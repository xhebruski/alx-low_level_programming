#include "main.h"

/**
  * swap_int - swap the values of two int
  * @a: num1
  * @b: num2
  * Return: 0
  */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
