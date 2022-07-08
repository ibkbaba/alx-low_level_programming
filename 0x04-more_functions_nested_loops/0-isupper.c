#include "main.h"

/**
 *_isupper -check upper case
 *@c: an integer parameter
*Return:something but success
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
