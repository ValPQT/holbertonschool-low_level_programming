#include "main.h"
/**
 * print-alphhabet_x10 - imprime l'alphabet en minuscules 10 fois
 *
 * Description: Cette fonction affiche les lettres de 'a' a 'z'
 * dix fois, chacune sur une nouvelle ligne.
 */
Void print_alphabet_x10(void)
{
	int i;
	char l;

	for (i = 0; i < 10; i++)
	{
		for (l = 'a' ; l <= 'z' ; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
