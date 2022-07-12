#include "main.h"

/**
 * _puts- function that prints a string,
 * @str:parameter for the function
 */

void _puts(char *str)
{
	(*str != '\0'; str++);
	{
		_putchar(*str);
	}
	_putchar('\n');
}
