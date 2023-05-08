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
        if (*s != c)  
            s++;      
        else         
            return (s);
    }

    if (c == '\0')
        return (s);

    return (NULL);  
}
