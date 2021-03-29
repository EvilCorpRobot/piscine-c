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

