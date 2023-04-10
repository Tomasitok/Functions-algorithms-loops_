#include "main.h"

/**
 * more_numbers - print ten times the numbers from 0 to 14
 * return nothing
*/

void more_numbers(void)
{
    int i, p;
    for (p = 0; p < 10; p++)
    {  
        for (i = 0; i <= 14; i++)
        {
            if (i > 9)
            {
                _putchar((i / 10)+ '0');
            }
            _putchar((i % 10)+ '0');
        }
        _putchar('\n');
    }
}