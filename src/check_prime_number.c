
#include "check_prime_number.h"
int check_prime_number(int x)
{
    int i=2;
    while(i<=x/2)
    {
         if(x%i==0)
            /* Return 0 for Not Prime Number */
             return 0;
         else
             i++;
    }
    /* Return 1 for Prime Number */
    return 1;
}
