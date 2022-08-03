#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct operation toperform
 * @s: operation to perform
 * Return: pointer to the correct function
 */

int (*get_op_func(char *s))(int, int)
{
	int a, b, c;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = f(a, b);
	printf("%d\n", c);
	return (0);
}
