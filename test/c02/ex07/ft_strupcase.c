char     *ft_strupcase(char *str);

char     *ft_strupcase(char *str)
{
    int compteur;

    compteur = 0;
    while (str[compteur] != '\0')
    {
        if ((str[compteur] >= 'a' || str[compteur] <= 'z'))
            str[compteur] = str[compteur] - 32;
        compteur++;
    }
    return (str);
}
