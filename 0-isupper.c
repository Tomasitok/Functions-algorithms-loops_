#include "main.h"

/**
 * _isupper - Check if a character is uppercase
 * @c
 * returns 1 if c is uppercase, otherwise it returns 0
*/

int _isupper(int c)
{
    if (c >= 65 && c <= 90)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
