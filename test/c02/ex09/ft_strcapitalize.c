#include <stdio.h>
char *ft_strcapitalize(char *str);

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 86)
            str[i] += 32;
        i++;
    }
    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] < 32 || str[i] == 127) && !(str[i] >= 'a' && str[i] <= 'z'))
        {
            if (str[i++] != ' ' || (str[i++] < 'A' && str[i++] > 'Z'))
                str[i + 2] -= 32;
        }
        i++;
    }
    printf("%s", str);
    return (str);
}

int     main(void)
{
    char salut[] = "comment, tu va, je+vais+bien";
    ft_strcapitalize(salut);
}