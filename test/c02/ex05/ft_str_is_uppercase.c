int     ft_str_is_uppercase(char *str);

int     ft_str_is_uppercase(char *str)
{
    int compteur;

    compteur = 0;
    while (str[compteur] != '\0')
    {
        int a = str[compteur];
        if ((a < 'a' || a > 'z'))
        {
            return (0);
        }
        compteur++;
    }
    return (1);
}