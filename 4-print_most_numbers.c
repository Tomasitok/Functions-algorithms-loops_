#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9, but without 2 or 4
 * return nothing
*/

void print_most_numbers(void)
{
    int i;
    for (i = 0; i <= 9; i++)
    {
        if (i == 2 || i == 4)
        {
            i++;
        }
        _putchar (i + '0');
    }
    _putchar ('\n');
}