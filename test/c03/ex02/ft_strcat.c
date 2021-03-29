#include <stdio.h>


char *ft_strcat(char *dest, char *src)
{
    char *a;

    a = dest;
    while (*a)
        a++;
    while (*src)
        *a++ = *src++;
    *a = '\0';
    return (dest);
}


