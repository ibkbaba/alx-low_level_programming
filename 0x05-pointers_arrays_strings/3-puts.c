#include "main.h"

/**
 * _puts- function that prints a string,
 * @str:parameter for the function
 */

void _puts(char *str)

{
	int index;

	for (index = 0; str [index] != '\0'; index++)
	{
		putchar(str[index]);
	}
	_putchar('\n');
}
