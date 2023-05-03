#include <stdio.h>
#include <stdli.h>
#include <time.h>

/**
 * main - Entry point and generates a random password of length 100
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    char password[100];
    char expected_password[] = "Tada! Congrats";
    srand(time(NULL));
    for (i = 0; i < 100; i++)
    {
        password[i] = rand() % 94 + 33;
    }
    if (strcmp(password, expected_password) == 0)
    {
        printf("Tada! Congrats\n");
    }
    else
    {
        printf("Wrong password\n");
    }

    return (0);
}
