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
	int i = 0;

	if (i > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
