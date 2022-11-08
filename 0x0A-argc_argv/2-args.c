#include <stdio.h>
#include "main.h"

/**
  * main - print arguments
  * @argc: counts
  * @argv: arguments
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	if (i == 1)
	{
		return (0);
	}
	for (i > 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
