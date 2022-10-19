#include "main.h"
#include <unistd.h>

/**
* _putchar - put the char c to stdout
* @c: the char to print
*
* Return: 1 (SUCCESS)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
