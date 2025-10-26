#include "main.h"
/**
 * print_last_digit - will print the last digit of a given number.
 * @n: Number used to find the last digit.
 *
 * Description: will print the last digit of a given number. If the
 * number is a negative the value will be return unsigned int.
 *
 * Return: last digit as int value.
 */
int print_last_digit(int n)
{

	if (n > 0)
	{
		return (n % 10);
	}
	else if (n < 0)
	{
		return (-n % 10);
	}
	else
	{
		return (0);
	}
}
