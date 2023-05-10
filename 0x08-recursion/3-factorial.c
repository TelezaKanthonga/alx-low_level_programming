#include "main.h"
/**
 *factorial -calculates factorial of n
 *@n :integer
 *Return :On success 1 and -1 on error
 */
int factorial(int n)
{
        if (n < 0)
                return (-1);
        if (n == 0)
                return (1);
        return (n * factorial(n - 1));
}
