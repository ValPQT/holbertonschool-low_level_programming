#include <stdio.h>
#include "main.h"

int main (void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n / 3 && n / 5)
		{
			printf("FizzBuzz ", n);
		}
		else if ( n / 3)
		{
			printf("Fizz ", n);
		}
		else if (n / 5)
		{
			printf("Buzz ", n);
		}
		else
		{
			printf("%d", n);
		}
	}
	printf('\n');


	return (0)
}
