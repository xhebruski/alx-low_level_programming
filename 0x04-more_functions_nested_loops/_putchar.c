#include <unistd.h>
#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: The char to be printed
* Return: 1 (SUCCESS), else -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
