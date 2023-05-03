#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    char password[100];

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random password of length 100
    for (i = 0; i < 100; i++)
    {
        // Generate a random character between ASCII codes 33 and 126 (inclusive)
        password[i] = rand() % 94 + 33;
    }

    // Print the password
    printf("%s\n", password);

    return (0);
}
