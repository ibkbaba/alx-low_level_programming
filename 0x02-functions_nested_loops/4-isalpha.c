#include "main.h"

/**
 *_isalpha-check either lowercase or uppercase
 * @c:character to get
 *Return:return 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
