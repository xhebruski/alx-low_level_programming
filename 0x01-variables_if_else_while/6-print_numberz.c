#include <stdio.h>
/**
 *main-entry point.
 *Return: 0 if no error
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
