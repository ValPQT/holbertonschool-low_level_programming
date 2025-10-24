#include "main.h"

/**
 *_islower - test for a lowercase letter
 *
 *Return : 1 (success) else 0 (failure)
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
