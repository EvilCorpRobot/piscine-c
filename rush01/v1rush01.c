#include <unistd.h>

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

bool    ft_checkln(int map[i][6])
{
    int pdv1;
    int pdv2;
    int startln;
    int endln;
    int tab[1];
    int nbrbox1;
    int nbrbox2;

    pdv1 = 0;
    pdv2 = 5;
    startln = 1;
    endln = pdv2 - 1;
    tab[0] = 0;
    nbrbox1 = 0;
    nbrbox2 = 0;
    while (startln <= endln)
    {
        if (map[i][startln] > tab[0])
        {
            ft_swap(map[4][startln], &tab[0]);
            nbrbox1++;
            startln++;
        }
        startln++;
    }
    starln = 1;
    tab[0] = 0;
    while (endln <= startln)
    {
        if (map[i][endln] > tab[0])
        {
            ft_swap(map[i][endln], &tab[0]);
            nbrbox2++;
            endln--;
        }
        endln--;
    }
    if ((nbrbox1 < map[i][pdv1] && nbrbox2 < map[i][pdv2]) && map[i][position] != 0)
    {
        return true;
    }
    else {
        return false;
    }
}

bool    ft_checkcl(int map[6][int j])
{
    int pdv1;
    int pdv2;
    int startln;
    int endln;
    int tab[1];
    int nbrbox1;
    int nbrbox2;

    pdv1 = 0;
    pdv2 = 5;
    startcl = 1;
    endcl = pdv2 - 1;
    tab[0] = 0;
    nbrbox1 = 0;
    nbrbox2 = 0;
    while (startcl <= endcl)
    {
        if (map[startcl][j] > tab[0])
        {
            ft_swap(map[startcl][j], &tab[0]);
            nbrbox1++;
            startcl++;
        }
        startcl++;
    }
    starcl = 1;
    tab[0] = 0;
    while (endcl <= startcl)
    {
        if (map[endcl][j] > tab[0])
        {
            ft_swap(map[endcl][j], &tab[0]);
            nbrbox2++;
            endcl--;
        }
        endcl--;
    }
    if (nbrbox1 < map[pdv1][j] && nbrbox2 < map[pdv2][j])
    {
        return true;
    }
    else {
        return false;
    }
}

bool    ft_is_valide(int map[6][6], int position[int y][int x])
{
    int k;

    k = 0;
    if (y == 0 && x == 0)
    {
        y++;
        x++;
    }
    if (x == 5)
        y++;
    if (y == 5 && x == 5)
        return true;
    if (map[y][x] != 0)
        return ft_is_valide(map[4][4], position[y][x+1]);
    while (k > size_ln)
    {
        if (ft_checkln(map[y][4]) && ft_checkcl(map[y][4]))
        {
            mao[y][x] == k;
            if (ft_is_valide(map[4][4], position[y][x+1])
                return true;
        }
    }
    map[y][x] = 0;
    return false;
}

void    ft_show(int map[6][6])
{
    int i;
    int j;

    j = 1;
    i = 1;
    while (i <= 5)
    {
        while (j <= 5)
        {
            int a;
            if (j == 5)
            {
                i++;
                j = 1;
            }
            a = map[i][j];
           // a = a + 60;
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
    ft_show(map);
}
