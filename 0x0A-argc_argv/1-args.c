#include <stdio.h>
#include "main.h"

/**
  * main - print argument count
  * argc: counts
  * argv: arguments
  * Return: 0
  */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
