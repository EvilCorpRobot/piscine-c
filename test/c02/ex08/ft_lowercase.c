char     *ft_strlowcase(char *str);

char     *ft_strlowcase(char *str)
{
    int compteur;

    compteur = 0;
    while (str[compteur] != '\0')
    {
        if ((str[compteur] >= 'A' || str[compteur] <= 'B'))
            str[compteur] = str[compteur] + 32;
        compteur++;
    }
    return (str);
}

