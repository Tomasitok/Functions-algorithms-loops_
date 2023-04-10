#include "main.h"

/**
 * Check if c is a digit
 * @c
 * returns 1 if c is a digit, returns 0 otherwise
*/

int _isdigit(int c)
{
    if (c >= 48 && c <= 57)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}