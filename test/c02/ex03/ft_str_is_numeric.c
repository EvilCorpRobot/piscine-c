int     ft_str_is_numeric(char *str);

int     ft_str_is_numeric(char *str)
{
    int compteur;

    compteur = 0;
    while (str[compteur] != '\0')
    {
        int a = str[compteur];
        if ((a < '0' || a > '9')
        {
            return (0);
        }
        compteur++;
    }
    return (1);
}