#include "main.h"

/**
 * _puts_recursion-function that prints a string
 * * Desc: _memset
 * @s:string
 *Return:string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
		_putchar(*s);
	s++;
	_puts_recursion(s);
}
