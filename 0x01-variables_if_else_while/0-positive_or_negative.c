#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - asign a random number to the variable
*based a condition
*return: always 0
*/
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
return (0);
}
