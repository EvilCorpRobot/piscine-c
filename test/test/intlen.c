int		ft_puissance(int base, int exp);
int		ft_intlen(int i);

int		ft_puissance(int base, int exp)
{
	int compteur1 = 0;
	int resultat = 1;
	while (compteur1 <= exp)
	{
		resultat = base * resultat;
		compteur1++;
	}
	return resultat;
}

int 	ft_intlen(int i)
{
	int compteur1 = 1;
	int puissance_10 = 1;
	int intlen = 0;
	if (i < 10)
		return 1;
	while (i >= puissance_10)
	{
		puissance_10 = ft_puissance(10, compteur1);
		compteur1++;
	}
	while (puissance_10 >= 10)
	{
		puissance_10 = puissance_10 / 10;
		intlen++;
	}
	return intlen;
		
}

