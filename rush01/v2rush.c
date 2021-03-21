#include <unistd.h>
#include <stdio.h>

#define false 0;
#define true 1;
typedef int bool;

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_swap(int a, int *b)
{
	*b = a;
}

bool    ft_checkln(int map[6][6], int ln, int taille)
{
	int pdv1;
	int pdv2;
	int startln;
	int endln;
	int tab[1];
	int tab2[9];
	int nbrbox1;
	int nbrbox2;
	int i;
	int a;

	pdv1 = map[ln][0];
	pdv2 = map[ln][taille];
	startln = 1;
	endln = taille - 2;
	tab[0] = 0;
	tab2[0] = 0;
	nbrbox1 = 0;
	nbrbox2 = 0;
	i = 0;
	a = 0;
	while (startln <= endln) //teste le nombres de caisse visibles en partant de la gauche
	{
		if (map[ln][startln] > tab[0])
		{
			ft_swap(map[ln][startln], &tab[0]);
			ft_swap(map[ln][startln], &tab2[i]);
			nbrbox1++;
			startln++;
			i++;
		}
		else
		{
			ft_swap(map[ln][startln], &tab2[i]);
			startln++;
			i++;
		}
	}
	startln = 1;
	tab[0] = 0;
	i = 0;
	while (endln >= startln) //teste le nombres de caisse visibles en partant de la droite
	{
		if (map[ln][endln] > tab[0])
		{
			ft_swap(map[ln][endln], &tab[0]);
			nbrbox2++;
			endln--;
			i++;
		}
		endln--;
	}
	i = 0;
	endln = taille - 1;
	while (startln <= endln) //teste si deux valeurs sont identiques
	{
		if (map[ln][startln] != 0)
		{
			while (i < endln - 1)
			{
				if (tab2[i] == map[ln][startln])
				{
					a++;
					if (a == 2)
						return false;
				}
				i++;
			}
			a = 0;
			i = 0;
			startln++;
		}
	}
	if (nbrbox1 <= map[ln][pdv1] && nbrbox2 <= map[ln][pdv2]) //teste si on ne depasse pas le nombre de caisse par rapport au vue
	{
		return true;
	}
	else {
		return false;
	}
}

bool    ft_checkcl(int map[6][6], int cl, int taille)
{
	int pdv1;
	int pdv2;
	int startcl;
	int endcl;
	int tab[1];
	int tab2[9];
	int nbrbox1;
	int nbrbox2;
	int i;
	int a;

	pdv1 = map[0][cl];
	pdv2 = map[taille][cl];
	startcl = 1;
	endcl = taille - 2;
	tab[0] = 0;
	tab2[0] = 0;
	nbrbox1 = 0;
	nbrbox2 = 0;
	i = 0;
	a = 0;
	while (startcl <= endcl)//teste le nombres de caisse visibles en partant du haut
	{
		if (map[startcl][cl] > tab[0])
		{
			ft_swap(map[startcl][cl], &tab[0]);
			ft_swap(map[startcl][cl], &tab2[i]);
			nbrbox1++;
			startcl++;
			i++;
		}
		else
		{
			ft_swap(map[startcl][cl], &tab2[i]);
			startcl++;
			i++;
		}
	}
	startcl = 1;
	tab[0] = 0;
	i = 0;
	while (endcl >= startcl)//teste le nombres de caisse visibles en partant du bas
	{
		if (map[endcl][cl] > tab[0])
		{
			ft_swap(map[endcl][cl], &tab[0]);
			nbrbox2++;
			endcl--;
			i++;
		}
		endcl--;
	}
	i = 0;
	endcl = taille - 1;
	while (startcl <= endcl)//teste si deux valeurs sont identiques
	{
		if (map[startcl][cl] != 0)
		{
			while (i < endcl - 1)
			{
				if (tab2[i] == map[startcl][cl])
				{
					a++;
					if (a == 2)
						return false;
				}
				i++;
			}
			a = 0;
			i = 0;
			startcl++;
		}
	}
	if (nbrbox1 <= map[pdv1][cl] && nbrbox2 <= map[pdv2][cl]) //teste si on ne depasse pas le nombre de caisse par rappor au vue
	{
		return true;
	}
	else {
		return false;
	}
}

bool    ft_is_valide(int map[6][6], int y, int x, int size)
{
	printf("0");
	int k;

	k = 0;
	printf("1");
	if (x == 5)
		y++;
	if (y == 5 && x == 5)
		return true;
	if (map[y][x] == 0)
	{
		printf("2");
		while (k <= size)// teste toutes les valeurs possible
		{
			if (ft_checkln(map, y, 6) && ft_checkcl(map, x, 6))
			{
				map[y][x] = k;
				if (ft_is_valide(map, y, x + 1, size))
					return true;  
			}
			k++;
			printf("2");
		}
	}
	map[y][x] = 0;
	return false;
}

void    ft_show(int map[6][6])
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (i < 5)
	{
		while (j <= 6)
		{
			int a;
			if (j == 6)
			{
				write(1, "\n", 1);
				i++;
				j = 0;
			}
			if (i == 6)
				return ;
			a = map[i][j];
			a = a + 48;
			j++;
			ft_putchar(a);
		}
	}
}

int     main(void)
{
	int map[6][6] =
	{
		{0, 4, 3, 2, 1, 0},
		{4, 0, 0, 0, 0, 1},
		{3, 0, 0, 0, 0, 2},
		{2, 0, 0, 0, 0, 2},
		{1, 0, 0, 0, 0, 2},
		{0, 1, 2, 2, 2, 0}
	};
	printf("a");
	ft_is_valide(map, 1, 1, 4);
	ft_show(map);
}
