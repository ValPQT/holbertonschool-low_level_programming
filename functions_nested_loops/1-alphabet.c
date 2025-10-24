#include "main.h"

/**
 * print_alphabet - imprime l'alphabet en minuscule
 */
void print_alphabet(void)
{
    char A;
    for (A = 'a'; A <= 'z'; A++)
    {
        _putchar(A);
    }
    _putchar('\n');
}
