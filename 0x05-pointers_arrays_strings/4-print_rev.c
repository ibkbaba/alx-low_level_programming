#include "main.h"

/**
 * print_rev- function that prints a string, in reverse, followed by a new line
 * @s:string to be printed
 */
void print_rev(char *s)
{
	int i, n;

	s = "hello"
	n = strlen(s);
	for (i = n - 1; i >= 0; 1--)
	{
		putchar(s[i]);
	}
}
