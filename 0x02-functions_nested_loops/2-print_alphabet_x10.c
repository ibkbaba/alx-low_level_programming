#include "main.h"

/**
 *print_alphabet_x10- writing alphabet in lower case
 */
void print_alphabet_x10(void);
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
