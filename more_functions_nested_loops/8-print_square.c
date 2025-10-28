#include "main.h"

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
				}
	}
}
