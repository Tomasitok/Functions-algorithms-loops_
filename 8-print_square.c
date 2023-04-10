#include "main.h"

/**
 * print_square - prints a square
 * @size: squeare size
 * return nothing
*/

void print_square(int size)
{
    if (size <= 0)
    {
        _putchar('\n');
    }
    else 
    {
        int j, n;
        for (j = 0; j < size; j++)
        { 
            for (n = 0; n < size; n++)
            {
                _putchar(35);
            }
            _putchar('\n');
        }
    }
}