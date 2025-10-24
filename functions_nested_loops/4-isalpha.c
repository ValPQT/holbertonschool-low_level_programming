#include "main.h"
/**
 * _isalpha - check if the given character is alphabetical.
 * @c: character to test.
 *
 * Return: 1 (True) else 0 (False)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
	return (0);
}
