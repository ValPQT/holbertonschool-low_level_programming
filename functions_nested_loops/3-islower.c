#include "main.h"

/**
 *_islower - check if a character is a lowercase letter
 *@c: character to be tested
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
