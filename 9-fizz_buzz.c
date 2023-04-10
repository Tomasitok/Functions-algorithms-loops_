#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz_test - print number from 1 to 100, the multiples of 3 are fizz and the multiples of 5 buzz, both are fizz
 * returns nothing
*/

void fizz_buzz_test(void)
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz ");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz ");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz ");
        }
        else
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
