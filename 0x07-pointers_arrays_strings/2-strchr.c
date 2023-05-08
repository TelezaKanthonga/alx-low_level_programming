#include <stdlib.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to find
 *
 * Return: pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
    while (*s)
    {
        if (*s != c)  /* check if current character is not the one we're looking for */
            s++;      /* if not, move to the next character */
        else          /* if it is, return a pointer to it */
            return (s);
    }

    /* if we didn't find the character, but we're looking for the null terminator */
    if (c == '\0')
        return (s);

    return (NULL);  /* if we didn't find the character and we're not looking for the null terminator */
}
