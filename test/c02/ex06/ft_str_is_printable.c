int     ft_str_is_printable(char *str);

int     ft_str_is_printable(char *str)
{
    int compteur;

    compteur = 0;
    while (str[compteur] != '\0')
    {
        int a = str[compteur];
        if ((a < 32 || a > 126))
        {
            return (0);
        }
        compteur++;
    }
    return (1);
}

